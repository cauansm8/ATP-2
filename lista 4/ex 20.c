/* Escreva um programa em C para calcular a media de valores armazenados 
em um arquivo binario contendo numeros reais. */

#include <stdio.h>

#define qnt 4

int main ()
{
    FILE *file;                 //// abrindo arquivo como binario e escrita+leitura
    file = fopen ("media_val_ex20.bin", "w+b");

    if (file == NULL)               //// verificando se o arquivo existe
    {
        printf ("Nao foi encontrado o arquivo!!!");
        return -1;
    }

    float numeros[qnt];

    for (int i = 0; i < qnt; i++)       /// arquivando numeros reais
    {
        printf ("Informe o numero %d: ", i+1);
        scanf ("%f", &numeros[i]);
    }

    for (int i = 0; i < qnt; i++)       /// passando os numeros reais para o arquivo bin
    {
    fwrite (&numeros[i] , sizeof(float), 1, file);
    }

    float numeros_arquivar[qnt];


    for (int i = 0; i < qnt; i++)       //// arquivando os valores que estao no arquivo bin
    {
        
        fseek (file, i * sizeof(float), SEEK_SET);
        fread (&numeros_arquivar[i],  sizeof(float), 1, file);
        
    }

    float soma = 0;

    for (int i = 0; i < qnt; i++)   /// imprimindo valores do arquivo
    {
        printf ("%f\n",numeros_arquivar[i]);
    }

    for (int i = 0; i < qnt; i++) /// somando valores do arquivo
    {
        soma += numeros_arquivar[i];
    }

    printf ("\nA media dos valors reais armazenados no arquivo binario: %f\n\n\n", soma/qnt); //// media dos valores reais

    fclose (file); /// fechando arquivo

    return 0;

}