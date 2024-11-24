/* Escreva um programa em C para compactar um arquivo binario aplicando tecnicas de compressao simples. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    char palavra[20];

    FILE *file;             //// abrindo arquivo bin para escrita
    file = fopen ("ex28_compressao.bin", "wb");

    if (file == NULL)           ///// verificando se encontra o arquivo
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    printf ("Informe uma palavra para inserida no arquivo: ");  ///// pegando palavra original
    scanf ("%s", palavra);

    fwrite (&palavra, sizeof(char), 20, file); //// passando a palavra para o arquivo bin

    fclose (file);      //// fechando arquivo

    
    
    file = fopen ("ex28_compressao.bin", "rb"); //// abrindo arquivo como leitura

    if (file == NULL)       //// verificando se encontra o arquivo
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    char coletar[20];

    fread (&coletar, sizeof(char), 20, file); //// coletando a palavra

    int t = strlen (coletar);
    
    coletar[t] = '\0';

    char compressao[20];    //// variavel da palavra apos a compressao
    
    int compressao_pos= 0;  //// variavel para posicao das letras e numeros de compressao

    for (int i = 0; i < t; i++, compressao_pos++)                               ///// LOOP PARA ANDAR DE LETRA EM LETRA E COMPARAR COM AS SEGUINTES
    {
        
        char c = coletar[i];                                                 //// letra de comparacao
        
        int prox_pos = i;                                               //// IMPORTANTE -> variavel que vai pular as letras iguais (ex aaabb)
        int contador = 0;                                                   //// o i sai do zero e vai para 3!!!


        for (int j = i; j < t && c == coletar[j] ; j++)                     ///// se as as letras proximas forem iguais, aumenta o contador
        {
            contador++;
            prox_pos++;
        }

        
        compressao[compressao_pos++] = c;                                       //// passa a letra para a string nova
        
        char n[10];                                                             //// transformando o valor do contador em string
        sprintf (n, "%d", contador);
        
        for (int cont_numeros= 0 ; n[cont_numeros] != '\0'; cont_numeros++)      //// passando os valores da string ate a string acabar
        {
            compressao[compressao_pos++] = n[cont_numeros];                     //// SEMPRE AUMENTANDO A POSI da palavra de compressao
        }
        
        compressao_pos--;                                                       ///// diminui um porque o loop inicial ja incrementa, entao para nn criar espacos -> -1


        if (prox_pos >= 2)                                                      //// semelhante ao compressao_pos--
        {
            i = prox_pos - 1;                                                   //// se o contador eh >= 2, o i (variavel para a palavra original)
        }                                                                           /// pula as casas iguais -1
                                                                                    /// esse -1 eh pq o loop inicial ja incrementa
    }

    compressao[compressao_pos] = '\0';      //// ao fim, coloca-se o \0 para determinar o fim da palavra

    fclose (file);      //// fechando arquivo


    file = fopen ("ex28_compressao.bin", "w+b");    //// abrindo arquivo como escrita e leitura

    if (file == NULL)       //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }


    fwrite (&compressao, sizeof(char), 20, file); //// passando a nova palavra para o arquivo

    char confirmar[20];

    rewind (file);

    fread (&confirmar, sizeof(char), 20, file); /// arquivando o conteudo para VERIFICAR se foi passado corretamente
   

    printf ("Palavra original: %s\n",coletar);                      //// palavra original
    printf ("Palavra apos a compressao: %s\n",compressao);          //// palavra apos a compressao
    printf ("Conteudo no arquivo bin: %s\n", confirmar);            //// conteudo no arquivo

    fclose (file);      /// fechando arquivo

    return 0;
}