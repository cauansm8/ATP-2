#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 5


int main ()
{
//// Escreva um programa em C que realize a rotacao de uma matriz quadrada 5x5 no sentido horario.
    int m[lin][col], m2[lin][col];

    printf ("Informe 25 numeros: \n");


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)         //// arquivando
        {
            scanf ("%d",&m[i][j]);
        }
    }

    printf ("\n\nA matriz antes da rotacao: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo
        }
        printf ("\n");
    }


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++){        //// rotacionando
            m2[i][j] = m[4-j][i];
        }
    }

    printf ("\n\nA matriz apos a rotacao horaria: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m2[i][j]);            //// imprimindo
        }
        printf ("\n");
    }



return 0;
}
