/* Escreva um programa em C para encontrar o maior e o menor numero em um arquivo de texto contendo numeros inteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define qnt 5

int main ()
{
    FILE *file;         //// criando arquivo como escrita e leitura
    file = fopen ("Maior_e_menor_ex18.txt", "w+");

    if (file == NULL)   //// verificando se existe o arquivo
    {
        printf ("Nao foi encontrado o arquivo\n\n");
        return -1;
    }

    int n;

    printf("Informe um numero: ");  //// passando o primeiro numero como menor e maior
    scanf("%d", &n);  
    fprintf(file, "%d\n", n); 

    int menor = n, maior = n;


    for (int i = 0; i < qnt - 1; i++)   //// passando os outros numeros
    {
        int n;

        printf("Informe um numero: ");

        scanf("%d", &n);  

        fprintf(file, "%d\n", n);  
    }

    rewind (file);                  //// retornando ao inicio do arquivo
    
    int c;

    while (fscanf (file, "%d", &c) != EOF)       //// loop ate c chegar ao END OF FILE
    {
    
    if (c < menor)   /// se o numero for menor que o menor -> menor = n
    {
        menor = c;
    }

    if (c > maior)  /// se o numero for maior que o maior -> maior = n
    {
        maior = c;
    }

    }


    printf ("O maior e menor numero: %d e %d\n\n\n", maior, menor); //// imprimindo o maior e o menor numero

    fclose (file);      /// fechando arquivo

    return 0;
}