#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 4

int main ()
{
//// Escreva um programa em C que calcule a soma dos elementos
//// abaixo da diagonal principal de uma matriz 4x4.
    int m[lin][col];


    printf ("Informe 16 numeros: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    printf ("\n\nA matriz formada: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0;  j < col; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo
        }
        printf ("\n");
    }


    int soma=0;

    for (int i=1; i < lin; i++)
        {
        for (int j=0, condicao=0; j < col && condicao!=1; j++)
        {
            if (i == j)
            {                               //// se forem iguais (OU SEJA, m[i][j] ESTA NA DIAGONAL PRINCIPAL)
                condicao = 1;               //// encerra o loop (pula para a prox linha)
            }
            else {
            soma += m[i][j];
            }
        }
    }

    printf ("\n\nA soma dos elementos abaixo da diagonal principal: %d\n\n\n",soma);


    return 0;
}
