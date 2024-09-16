#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //// Escreva um programa em C que multiplique uma matriz 2x3 por
    //// uma matriz 3x2 e armazene o resultado em uma matriz 2x2.


    int m1[2][3], m2[3][2], m_res[2][2];

    printf ("Informe 8 numeros para a matriz 1: \n");

    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 3; j++)
        {
            scanf("%d",&m1[i][j]);  //// arquivando m1
        }
    }

    printf ("\n\nA matriz 1: \n");


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf ("%d ",m1[i][j]);        //// imprimindo a matriz 1
        }
        printf ("\n");
    }


    printf ("\n\nInforme 8 numeros para a matriz 2: \n");


    for (int i = 0; i < 2; i++)
    {
        for (int j=  0; j < 3; j++)
        {
            scanf("%d",&m2[i][j]);      //// arquivando a matriz 2
        }
    }


    printf ("\n\nA matriz 2: \n");


    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 2; j++)
        {
            printf ("%d ",m2[i][j]);    //// imprimindo a matriz 2
        }
        printf ("\n");
    }




    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

         int soma =0;

            for (int x=0; x < 3; x++) {       //// formando a matriz multiplicacao
           soma +=  m1[i][x] *  m2[x][j];

            }


         m_res[i][j] = soma;
        }

    }

     printf ("\n\n\A matriz resultante da multiplicacao: \n");
    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 2; j++)
        {
            printf ("%d ",m_res[i][j]);     //// imprimindo
        }
        printf ("\n");
    }
    printf ("\n\n\n");




    return 0;
}
