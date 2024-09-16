#include <stdio.h>
#include <stdlib.h>


int main ()
{
///// Escreva um programa em C que calcule a transposta de uma
///// matriz 3x4.
    int m[3][4], mT[4][3];


    printf ("Informe 12 numeros: \n");

    for (int i=0; i < 3; i++)
        {
        for (int j=0; j < 4; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    printf ("\n\nA matriz formada: \n\n");

    for (int i=0;  i < 3; i++)
        {
        for (int j=0; j < 4; j++)
        {
            printf  ("%d  ",m[i][j]);   //// imprimindo
        }
        printf ("\n");
    }

    for (int i=0; i < 4; i++)
        {
        for (int j=0; j < 3; j++)
        {
            mT[i][j] = m[j][i];     //// passando
        }
    }

    printf ("\n\nA matriz transposta: \n\n");

    for (int i=0; i < 4; i++)
        {
        for (int j=0; j < 3; j++)
        {
            printf  ("%d  ",mT[i][j]);  //// imprimindo
        }
        printf ("\n");
    }





    return 0;
}
