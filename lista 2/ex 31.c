#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{

//// Escreva um programa em C que verifique se uma matriz 3x3  e uma matriz de Vandermonde.

    int m[lin][col];                            //// ex: 2^0  2^1  2^2      ->  1  2  4
                                                ////     3^0  3^1  3^2          1  3  9
                                                ////     4^0  4^1  4^2          1  4  16
    printf ("Informe 9 numeros: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    printf ("\n\n A matriz informada: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);         //// imprimindo
        }
        printf ("\n");
    }


    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {

            if (m[i][0]!=1){
                        printf ("\n A matriz nao e de Vandermonde\n");      //// o primeiro valor sempre eh 1
                        return 1;
                                }

            else {
                int prod=1;
                        for (int contador=0; contador < j; contador++){     //// multiplicando
                        prod *= m[i][1];
                }

                if (m[i][j] != prod){
                        printf ("\n A matriz nao e de Vandermonde\n");      //// verificar se o aquela multi eh igual ao valor informado
                        return 1;
                }

            }
        }
    }

    printf ("\n A matriz e de Vandermonde\n");

    return 0;
}
