#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que copie os elementos de uma matriz 3x3 para outra matriz.
    int m1[3][3], m2[3][3];

    printf ("Informe 9 numeros: \n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++){        //// arquivando os valores da primeira matriz

            scanf ("%d",&m1[i][j]);
        }

    }
    printf ("\n\n");


    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++)     //// passando os valores para outra matriz
        {
            m2[i][j] = m1[i][j];

        }
    }

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++)
        {
            printf ("%d ",m1[i][j]);            //// imprimindo a matriz original
        }
        printf ("\n");
    }

    printf ("\n\n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++)             //// imprimindo a outra matriz copia
        {
            printf ("%d ",m2[i][j]);
        }

        printf ("\n");
    }






    return 0;
}
