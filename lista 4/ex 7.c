/* Escreva um programa em C para substituir uma palavra por outra em um arquivo de texto. */

#include <stdio.h>

int main ()
{
    FILE *file;             //// ponteiro para arquivo
    file = fopen ("substituir_palavra_ex7.txt", "w");      //// abrindo o arquivo como escrita e leitura

    if (file == NULL)               //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo\n\n");
        return 1;
    }

    char palavra1[100], palavra2[100];

    printf ("Informe uma palavra para ser inserida: ");     //// pegando a primeira palavra
    gets (palavra1);
    

    fprintf (file, "%s", palavra1);                         /// inserindo a primeira palavra no arquivo

    
    printf ("A palavra '%s' foi escrita no arquivo!!\n", palavra1);

    
    rewind (file); /// É NECESSARIO PARA SUBSTITUIR -> se nao, serao concatenadas as palavras!!!


    printf ("\n\nInforme uma palavra para substituir a palavra anterior: ");    //// pegando a palavra substituta
    gets (palavra2);


    fprintf (file, "%s", palavra2);     //// substituindo as palavras


    printf ("\nA palavra '%s' foi substituida pela palavra '%s'!!!\n\n", palavra1, palavra2);
    

    fclose (file);              //// fechando arquivo

    return 0;
}