#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 3x3 e uma matriz de Hankel
    int m[lin][col];                //// -> repete os ultimos dois numeros da linha anterior


    printf ("Informe 9 numeros: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)         //// ex: 1 2 3
        {                                       //// 2 3 4
            scanf ("%d",&m[i][j]);              //// 3 4 5          //// arquivando
        }
    }


    printf ("\n\nA matriz formada: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);         //// imprimindo
        }
        printf ("\n");
    }

    for (int i=1; i < lin; i++)
        {
        for (int j=0; j < col && j!=col-1; j++)
        {
            if (m[i][j] != m[i-1][j+1])                     //// verificando
            {
                printf ("\nA matriz NAO e uma matriz de Hankel\n\n");
                return 1;
            }
        }
    }


    printf ("\n\nA matriz eh uma matriz de Hankel\n\n");



    return 0;
}