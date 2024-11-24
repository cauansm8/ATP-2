/* Escreva um programa em C para ler e exibir o conteudo de um arquivo de texto. */

#include <stdio.h>


int main ()
{
    FILE *file;     //// declarando a variavel arquivo como ponteiro
    file = fopen ("exibir_texto_ex2.txt", "r");    /// abrindo para modo leitura

    if (file == NULL)       //// verificacao se o arquivo existe
    {
        printf ("Nao existe arquivo\n\n");
        return 1;
    }

    

    char mensagem[20];              //// variavel para guardar o conteudo que esta no arquivo txt

    fscanf (file, "%s", mensagem);  //// arquivando
 
    printf ("O texto do arquivo.txt: %s", mensagem);        //// imprimindo

    fclose (file);  //// fechando

    return 0;
}