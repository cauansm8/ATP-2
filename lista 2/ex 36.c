#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define col 5
#define lin 5

int main ()
{
//// Escreva um programa em C que preencha uma matriz 5x5 com
//// numeros aleatorios e depois ordene os elementos de cada coluna.

    srand (time(NULL)); //// serve para aleatorizar sempre os valores!!
    int alea;
    int m[lin][col];

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            alea = rand () % 99;        //// arquivando valores aleatorios
            m[i][j] = alea;
        }
    }
    printf ("\nMatriz antes da ordenacao: \n");


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo
        }
        printf ("\n");
    }


    for (int i=0; i < col; i++)
        {
        for (int j=0; j < lin; j++)
        {
            for (int k=0; k < lin; k++)
            {
                if (m[j][i] < m[k][i])
                {
                    int aux;
                    aux = m[j][i];              //// organizando por coluna

                    m[j][i] = m[k][i];

                    m[k][i] = aux;

                }
            }
        }
    }

    printf ("\nMatriz depois da ordenacao: \n");


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo
        }
        printf ("\n");
    }




    return 0;

}
