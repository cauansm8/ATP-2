#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3




int main ()
{
    //// Escreva um programa em C que verifique se duas matrizes 3x3 sao ortogonais


    //// m * mt = i


    int m[lin][col], mt[lin][col], mi[lin][col]={1,0,0,0,1,0,0,0,1}, mres[lin][col];


    printf ("Informe 9 numeros: \n");           //// ex: 1 0 0
                                                ////     0 1 0
    for (int i=0; i < lin; i++)                 ////     0 0 1
    {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            mt[i][j] = m[j][i];     ///// criando a transposta
        }
    }
    printf ("\n\nA matriz: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo
        }
        printf ("\n");
    }

    printf ("\n\nA matriz tranposta: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",mt[i][j]);    //// imprimindo
        }
        printf ("\n");
    }
    int soma = 0;

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            for (int k=0; k < 3; k++)
            {
                    soma  += m[i][k] * mt[k][j];    //// criando a matriz resultante da multiplicacao
                    }
            mres[i][j] = soma;
            soma = 0;
        }
    }

    printf ("\n\nA matriz resultante da multiplicacao: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",mres[i][j]);      //// imprimindo
        }
        printf ("\n");
    }

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            if (mres[i][j] != mi[i][j])         //// comparando
            {
                printf ("\n\nMatriz nao ortogonal (M_res != Identidade)\n\n");
                return 1;
            }
        }
    }

    printf ("\n\nMatriz ortogonal (M_res = Identidade)\n\n");







    return 0;

}
