/* Escreva um programa em C para dividir um arquivo binario grande em arquivos menores de tamanho fixo. */

#include <stdio.h>
#include <string.h>



int main ()
{
    FILE *file, *file1, *file2, *file3;             //// abrindo 4 arquivos como escrita e leitura -> o principal (file) eh o arquivo geral
    file = fopen ("ex27_dividir_arq.bin", "w+b");
    file1 = fopen ("ex27_dividir_arq1.bin", "w+b");
    file2 = fopen ("ex27_dividir_arq2.bin", "w+b");
    file3 = fopen ("ex27_dividir_arq3.bin", "w+b");

    if (file == NULL)       //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    if (file1 == NULL)      //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    if (file2 == NULL)      //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }

    if (file3 == NULL)      //// verificando se eh possivel encontrar os arquivos
    {
        printf ("Nao foi encontrado o arquivo!!\n");
        return -1;
    }


    for (int i = 0; i < 3; i++)     //// passando 3 linhas de conteudo para o arquivo geral
    {
        char conteudo[100];
        printf ("Informe a linha %d com conteudo para ser colocado no arquivo maior: ", i + 1);

        gets (conteudo);

        fwrite (&conteudo, sizeof(char), 100, file);
    }

    rewind (file);          //// retornando ao inicio do arquivo geral

    char passar_conteudo[100];


        fread (&passar_conteudo, sizeof(char), 100, file);          //// ARQUIVANDO E PASSANDO 100 bytes para cada arquivo
        fwrite (&passar_conteudo, sizeof(char), 100, file1);
        

        fread (&passar_conteudo, sizeof(char), 100, file);          //// ARQUIVANDO E PASSANDO 100 bytes para cada arquivo
        fwrite (&passar_conteudo, sizeof(char), 100, file2);
        

        fread (&passar_conteudo, sizeof(char), 100, file);          //// ARQUIVANDO E PASSANDO 100 bytes para cada arquivo
        fwrite (&passar_conteudo, sizeof(char), 100, file3);


    char ler_conteudo1[100], ler_conteudo2[100], ler_conteudo3[100];
    
    rewind (file1);                                             ///// retornando para o inicio cada arquivo
    rewind (file2);
    rewind (file3);

    fread (&ler_conteudo1, sizeof(char), 100, file1);           ///// arquivando o conteudo de cada linha
    fread (&ler_conteudo2, sizeof(char), 100, file2);
    fread (&ler_conteudo3, sizeof(char), 100, file3);

    printf ("O conteudo em cada arquivo:\nArquivo 1: %s\nArquivo 2: %s\nArquivo 3: %s\n\n", ler_conteudo1, ler_conteudo2, ler_conteudo3);
                                                            //// verificando se os arquivos estao com o conteudo correto

    fclose (file);                                              //// fechando os arquivos
    fclose (file1);
    fclose (file2);
    fclose (file3);

    return 0;
}