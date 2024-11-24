/* Escreva um programa em C para comparar dois arquivos de texto linha por linha e mostrar as diferencas. */

#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *file1, *file2;        //// abrindo dois arquivos txt como escrita
    file1 = fopen ("ex26_diferencas1.txt", "w");
    file2 = fopen ("ex26_diferencas2.txt", "w");

    if (file1 == NULL)  //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo 1\n\n");
        return -1;
    }

    if (file2 == NULL) //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo 2\n\n");
        return -1;
    }
    char conteudo[100];

    int linhas;     //// arquivando quantidade de linhas
    printf ("Informe quantas linhas de conteudo deseja passar para os arquivos: ");
    scanf ("%d", &linhas);
    getchar ();


    for (int i = 0; i < linhas; i++) //// passando cada conteudo para as linhas ///// primeiro arquivo
    {
        printf ("Informe o conteudo da %d linha do arquivo 1: ", i + 1);

        gets (conteudo);

        int t = strlen (conteudo);

        conteudo[t] = '\0';  //// para nn ter invasao de conteudo, coloquei o fim de string (\0) antes de passar para o arquivo

        fprintf (file1, "%s\n", conteudo);

    }

    for (int i = 0; i < linhas; i++) //// mesma coisa so que passando o conteudo para o segundo arquivo
    {
        printf ("Informe o conteudo da %d linha do arquivo 2: ", i + 1);

        gets (conteudo);

        int t = strlen (conteudo);

        conteudo[t] = '\0';

        fprintf (file2, "%s\n", conteudo);

    }


    fclose (file1);     //// fechando arquivos
    fclose (file2);


    file1 = fopen ("ex26_diferencas1.txt", "r"); //// abrindo os dois como leitura
    file2 = fopen ("ex26_diferencas2.txt", "r");

    char ler_conteudo1[100], ler_conteudo2[100];

    rewind (file1);
    rewind (file2);

    for (int i = 0; i < linhas; i++) //// arquivando e mostrando as diferencas linha por linha
    {
        fgets(ler_conteudo1, 100, file1);
        fgets(ler_conteudo2, 100, file2);

        printf ("Linha %d:\n", i+1);
        printf ("Arquivo 1: %s", ler_conteudo1);
        printf ("Arquivo 2: %s\n", ler_conteudo2);
    }

    fclose (file1);             ///// fechando arquivos
    fclose (file2);

    return 0;
}