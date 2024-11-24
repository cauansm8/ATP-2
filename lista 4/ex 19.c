/* Escreva um programa em C para verificar se um arquivo de texto esta vazio ou nao. */

#include <stdio.h>

int main ()
{
    FILE *file;                     //// ponteiro para arquivo
    file = fopen ("arq_vazio_ex19.txt", "w+");

    if (file == NULL)       /// verificando se foi encontradoo arquivo
    {
        printf ("O arquivo nao foi encontrado\n\n");
        return -1;
    }

    char conteudo[20];              //// passando conteudo ou nao
    printf ("Informe um conteudo (ou nao): ");
    gets (conteudo);

    fprintf (file, "%s", conteudo); /// mandando conteudo para o arquivo

    rewind (file);      //// retornando ao inicio

    char caracter;
    char c = fscanf (file, "%c", &caracter); //// passando o conteudo arquivado em caracter para 'c'

    if (c == EOF)       //// se o conteudo for END OF FILE -> significa que ha nada no arquivo txt
    {
        printf ("Esta vazio o arquivo!!");
        
    }

    else {
        printf ("Nao esta vazio o arquivo!!");
    }

    fclose (file);      //// fechando arquivo

    return 0;
}