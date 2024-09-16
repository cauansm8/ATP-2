#include <stdio.h>
#include <stdlib.h>

#define tam 3

int main ()
{
//// Escreva um programa em C que multiplique uma matriz 3x3 por sua transposta.

    int m1[tam][tam], m2[tam][tam], m3[tam][tam];

    printf ("Informe 9 numeros: \n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            scanf ("%d",&m1[i][j]); //// arquivando
        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
           m2[i][j] = m1[j][i]; //// formando a transposta
        }
    }


    printf ("\n\nA primeira matriz: \n\n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d ",m1[i][j]);        //// imprimindo
        }
        printf ("\n");
    }

    printf ("\n\nA sua transposta: \n\n");
    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d ",m2[i][j]);    //// imprimindo
        }
        printf ("\n");
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
                int soma=0;

            for (int k=0; k < 3; k++)
                {
                soma += m1[i][k] * m2[k][j];    //// multiplicando
            }
            m3[i][j] = soma;
        }
    }


    printf ("\n\nA multiplicacao da matriz pela transposta: \n\n");

    for (int i=0; i < tam; i++)
        {
            for (int j=0; j<tam; j++)
            {
                printf ("%d ",m3[i][j]);    //// imprimindo
            }
            printf ("\n");
    }


    return 0;
}
