#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
//// Escreva um programa em C que preencha uma matriz 3x3 com numeros primos e depois substitua os
//// numeros primos por 1.

    int m[lin][col];


    printf ("Informe 9 numeros: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);  //// arquivando

            if (m[i][j] == 1){      //// numero 1 nao eh primo
                printf ("\nO numero nao e primo!!\n\n");
                return 1;
            }


            if ((m[i][j]!=2 && m[i][j]!=3 && m[i][j]!=5 && m[i][j]!=7) && (m[i][j]%2==0 || m[i][j]%3==0 | m[i][j]%5==0 | m[i][j]%7==0)){
                printf ("\nO numero nao e primo!!\n\n");
                return 1;
                }
        }
    }

    printf ("\nA matriz formada por numeros primos: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo
        }
        printf ("\n");
    }

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)     //// substituindo
        {
            m[i][j] = 1;
        }
    }

    printf ("\nA nova matriz formada pela substituicao de numeros primos por 1: \n");

     for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo

        }
        printf ("\n");
    }



    return 0;
}
