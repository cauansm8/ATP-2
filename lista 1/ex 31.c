#include <stdio.h>

int main ()
{
    //// Escreva um programa em C que use um array de ponteiros
    //// para armazenar 5 numeros inteiros e encontre o maior valor entre eles.

    int *pont, i=0, maior;

    pont = malloc (5 * sizeof (int)); //// alocando espaco


    printf ("\nInforme 5 numeros: \n");
    do
    {
    scanf ("%d",&pont[i]);           //// arquivando
    i++;

    }while (i<5);

    maior = pont[0];

    i = 1;

    do
    {
        if (pont[i]>maior){     //// verificando quem e o maior
        maior = pont[i];
        }
    i++;
    }while (i<5);

    printf ("O maior: %d\n",maior);

    free (pont);                    //// limpando

return 0;
}
