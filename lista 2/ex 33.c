#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define  col 5

int main ()
{
//// Escreva um programa em C que encontre o menor elemento em uma matriz 5x5.
    int m[lin][col];

    printf ("Informe 25 numeros: \n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);  //// arquivando
        }
    }
    printf ("\nA matriz: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo
        }
        printf ("\n");
    }

    int menor = m[0][0];

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            if (menor > m[i][j]){   //// verificando qual eh o menor
                menor = m[i][j];
            }
        }
    }


    printf ("\nO menor elemento da matriz: %d\n\n",menor);








    return 0;
}
