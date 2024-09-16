#include <stdio.h>

int main ()
{
//// Escreva um programa em C que multiplique uma matriz 2x3 por
//// uma matriz 3x2 e armazene o resultado em uma matriz 2x2.
    int m1[2][3], m2[3][2], mres[2][2];


    printf ("Informe 6 numeros: \n");
    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 3; j++)
        {
            scanf ("%d",&m1[i][j]);     //// arquivando
        }
    }

    printf ("Informe 6 numeros: \n");

    for (int i=0; i < 3; i++)
        {
        for (int j=0; j<2; j++)     //// arquivando
        {
            scanf ("%d",&m2[i][j]);
        }
    }
    printf ("\n\nA primeira matriz: \n");

    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 3; j++)
        {
            printf ("%d ",m1[i][j]);    //// imprimindo
        }
        printf ("\n");
    }


    printf ("\n\nA segunda matriz: \n");

    for (int i=0; i < 3; i++)
        {
        for (int j=0; j < 2; j++)
        {
            printf ("%d ",m2[i][j]);    //// imprimindo
        }
        printf ("\n");
    }


    for (int i=0; i < 2; i++)
        {

        for (int j=0; j<2; j++)
            {
         int soma=0;
            for (int k=0; k < 3; k++){    //// multiplicando
            soma += m1[i][k] * m2[k][j];
            }
        mres [i][j] = soma;

        }

    }

    printf ("\n\nA matriz resultante da multiplicacao: \n");

    for (int i=0; i < 2; i++)
        {
        for (int j=0; j < 2; j++)
        {
            printf ("%d ",mres[i][j]);  //// imprimindo
        }
        printf ("\n");
    }


    return 0;
}
