#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 3x3 e uma matriz de Toeplitz.
    int m[lin][col];                    //// -> todas as diagonais (direita para esquerda) tem os mesmos numeros


    printf ("Informe 9 numeros: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)     //// ex: 1 2 3
        {                               ////     4 1 2
            scanf ("%d",&m[i][j]);      ////     5 4 1          //// arquivando
        }
    }
    printf ("\n\nA matriz: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d  ",m[i][j]);        //// imprimindo
        }
        printf ("\n");
    }

    for (int k=0; k < 2; k++)
        {
        if (m[k][k] != m[k+1][k+1])         //// verificando
        {
            printf ("\n\nA matriz nao e matriz de Toeplitz\n\n");
            return 1;
        }
    }

    int k=1, i=0;
        if (m[i][k] != m[i+1][k+1])
            {                           //// DIAGONAL SUPERIOR
            printf ("\n\nA matriz NAO e matriz de Toeplitz\n\n");
            return 1;                                                   //// verificando
        }
        if (m[k][i] != m[k+1][i+1])
        {                                   //// DIAGONAL INFERIOR
            printf ("\n\nA matriz NAO eh matriz de Toeplitz\n\n");
            return 1;
        }


        printf ("\n\nA matriz eh uma matriz de Toeplitz\n\n");


    return 0;
}
