/* Escreva um programa em C para copiar o conteudo de um arquivo de texto para outro arquivo. */

#include <stdio.h>

int main ()
{
    FILE *file1, *file2;
    file1 = fopen ("copiar_ex4.txt", "r+w");        //// arquivo1 para ler e escrever dps
    file2 = fopen ("mensagem_ex1.txt", "r");        //// arquivo2 somente leitura



    if (file1 == NULL)                          /// verificando se o arquivo existe
    {
        printf ("Nao existe o arquivo");
        return 1;
    }

    if (file2 == NULL)                          /// verificando se o arquivo existe
    {
        printf ("Nao existe o arquivo");
        return 1;
    }

    char mensagem[100];

    fscanf (file2, "%s", mensagem);         /// copiando o conteudo

    printf ("A mensagem do arquivo 'mensagem_ex1': %s\n",mensagem);

    fprintf (file1, "%s\n", mensagem);      //// passando o conteudo


    printf ("Mensagem copiada para 'mensagem_ex1' !!!! \n\n");
    
    fclose(file1);          //// fechando arquivos
    fclose(file2);          //// fechando arquivos
  

    

    

    return 0;
}