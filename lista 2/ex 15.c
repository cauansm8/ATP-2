#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que inverta a ordem das linhas de uma matriz 3x3.

    int m1[3][3], m2[3][3];


    printf ("Informe 9 numeros: \n\n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m1[i][j]); //// arquivando os valores
        }
    }

    int z=1;

    for (int i=0; i <  lin; i++){
        if (i==2){                      //// esquema para trocar as linhas da matriz
        z=0;
        }

        for (int j=0; j < col; j++)
            {
            m2[i][j] = m1[z][j];        //// passando para outra matriz
        }
    z++;

    }
    printf ("\n\nA matriz antes: \n");



    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)     //// imprimindo a matriz anterior
        {
            printf ("%d ",m1[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\nA matriz posterior: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m2[i][j]);        //// imprimindo a matriz posterior
        }
        printf ("\n");
    }



    return 0;
}
