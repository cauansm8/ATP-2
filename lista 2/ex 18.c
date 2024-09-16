#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que verifique se uma matriz 3x3  e uma matriz identidade.
    int m[3][3];                             // 1 0 0    I == J, a = 1
                                             // 0 1 0    I != J, a = 0
                                             // 0 0 1

    for (int i=0; i<lin; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf ("%d",&m[i][j]);          //// arquivando os valores
        }
    }


    printf ("\n\nA matriz formada: \n");


    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo a matriz
        }
        printf ("\n");
    }
    printf ("\n\n\n");


    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            if (i == j)     //// se os valores sao iguais, o valor tem que ser 1
            {
                if (m[i][j] != 1)
                {
                    printf ("\nA matriz nao e identidade\n");   //// imprimindo
                    return 1;
                }
            }


            if (i != j)   //// se os valores sao iguais, o valor tem que ser 1
            {
                if (m[i][j] != 0)
                {
                    printf ("\nA matriz nao e identidade\n");   //// imprimindo
                    return 1;
                }
            }



        }
    }

        printf ("\nA matriz e identidade\n");   //// se o programa chegar aqui, significa que eh identidade

    return 0;
}
