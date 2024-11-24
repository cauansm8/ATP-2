/* Escreva um programa em C para concatenar dois arquivos de texto em um terceiro arquivo. */

#include <stdio.h>


int main ()
{   
    FILE *file1, *file2, *file3;                /// criando as variaveis correpondentes aos arquivos
    file1 = fopen ("mensagem_ex1.txt", "r");        //// apenas modo leitura -> para pegar o que esta escrito
    file2 = fopen ("exibir_texto_ex2.txt", "r");
    file3 = fopen ("concatenar_ex5.txt", "w");      //// modo write -> para criar e escrever

    if (file1 == NULL)                              //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo\n\n");
        return 1;
    }

    if (file2 == NULL)                              //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo\n\n");
        return 1;
    }

    if (file3 == NULL)                              //// verificando se existe o arquivo
    {
        printf ("Nao existe o arquivo\n\n");
        return 1;
    }

    char capturar_texto1 [100], capturar_texto2 [100];      //// strings

    fscanf (file1, "%s",capturar_texto1);           /// arquivando string do arquivo1
    fscanf (file2, "%s", capturar_texto2);          /// arquivando string do arquivo2

    fprintf (file3, "%s ",capturar_texto1);         //// passando para o terceiro texto
    fprintf (file3, "%s",capturar_texto2);          //// passando para o terceiro texto


    fclose (file1);     //// fechando os arquivos
    fclose (file2);     //// fechando os arquivos
    fclose (file3);     //// fechando os arquivos

    return 0;
}