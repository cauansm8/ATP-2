#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 4
int main ()
{
//// Escreva um programa em C que calcule a media dos elementos de uma matriz 4x4.
    int m[lin][col];

    float media, soma=0;

    printf ("Informe 16 numeros: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
            soma += m[i][j];
        }
    }

    printf ("\n\nA matriz: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);         //// imprimindo
        }
        printf ("\n");
    }



    printf ("\n\nA soma dos elementos: %.2f\n",soma);

    media = soma / (lin*col);

    printf ("\n\nA media da matriz: %.2f\n",media);


return 0;
}
