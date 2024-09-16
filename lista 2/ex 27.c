#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
//// Escreva um programa em C que multiplique uma matriz 3x3 por um escalar.
    int m[lin][col], esc;

    printf ("\n\nInforme um escalar: ");

    scanf ("%d",&esc);

    printf ("\n\nInforme a matriz: \n\n");


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }
    printf ("\n\nA matriz antes: \n\n");

    for (int i=0; i < lin; i++){
        for (int j=0; j < col; j++){    //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }



    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)     //// multiplicando por escalar
        {
            m[i][j] = m[i][j] * esc;
        }
    }

     printf ("\n\nA matriz depois: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo a matriz posterior
        }
        printf ("\n");
    }


    return 0;
}
