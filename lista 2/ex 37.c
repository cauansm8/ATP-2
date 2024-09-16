#include <stdio.h>
#include <stdlib.h>


int main ()
{
//// Escreva um programa em C que multiplique uma matriz 2x3 por
//// uma matriz 3x4 e armazene o resultado em uma matriz 2x4.

    int m1[2][3], m2[3][4], m_resul[2][4];


    printf ("Informe 6 numeros: \n\n");
    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 3; j++)
        {
            scanf ("%d",&m1[i][j]);     //// arquivando
        }
    }

    printf ("\n\nInforme 12 numeros: \n");

    for (int i=0; i < 3; i++)
        {
        for (int j=0; j < 4; j++)
        {
            scanf ("%d",&m2[i][j]);     //// arquivando
        }
    }

    printf ("\nA primeira matriz (2x3):\n");

    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 3; j++)
        {
            printf ("%d ",m1[i][j]);        //// imprimindo
        }
        printf ("\n");
    }

    printf ("\nA segunda matriz (3x4):\n");

    for (int i=0; i < 3; i++)
        {
        for (int j=0; j < 4; j++)
        {
            printf ("%d ",m2[i][j]);        //// imprimindo
        }
        printf ("\n");
    }

    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 4; j++)
        {
            int soma = 0;
            for (int k=0; k < 3; k++)
            {
                soma += m1[i][k] * m2[k][j];        //// multiplicando
            }
            m_resul[i][j] = soma;
        }
    }

    printf ("\nA matriz resultante da multiplicacao das matrizes anteriores(2x4):\n");

    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 4; j++)
        {
            printf ("%d ",m_resul[i][j]);   //// imprimindo
        }
        printf ("\n");
    }



return 0;
}
