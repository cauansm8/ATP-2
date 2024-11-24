/* Escreva um programa em C para calcular a soma de todos os numeros em um arquivo de texto contendo numeros inteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define qnt 5

int main ()
{
    FILE *file;                                     //// criando arquivo txt como escrita (arquivar) e leitura (somar)
    file = fopen ("Somar_nms_ex17.txt", "w+");

    if (file == NULL)                               //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo\n\n");
        return -1;
    }

    for (int i = 0; i < qnt; i++)       //// arquivando os valores e passando como string para o arquivo
    {
        int n;
        printf ("Informe um numero: ");
        scanf ("%d", &n);
        fprintf (file, "%d\n", n);

    }
    rewind (file);                              //// retornando ao inicio do arquivo

    int c;
    int soma = 0;
    
    while (fscanf (file, "%d", &c) != EOF)       //// loop ate c chegar ao END OF FILE
    {
    soma += c;                                      //// somando
    }


    printf ("A soma dos valores no arquivo txt: %d\n\n", soma);     //// imprimindo soma


    fclose (file);          //// fechando arquivo
    return 0;
}