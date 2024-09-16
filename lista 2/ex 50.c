#include <stdio.h>
#include <stdlib.h>

#define tam 4


int main (){
//// Escreva um programa em C que verifique se uma matriz 4x4 e
//// uma matriz de Drazin.

/// D * m * D = D -> m_drazin * m_random * m_drazin = m_drazin

    int drazin[tam][tam], matriz[tam][tam], mult1[tam][tam], mult_final[tam][tam];


    printf ("\nInforme a possivel matriz de Drazin: \n"); /// drazin e m_random ={1, 0, 0, 0
    for (int i = 0; i < tam; i++){                                          ///   0, 1, 0, 0
                                                                            ///   0, 0, 1, 0
        for (int j = 0; j < tam; j++){                                      ///   0, 0, 0, 1}

            scanf ("%d",&drazin[i][j]);        ////arquivando matriz drazin

        }
    }

    printf ("\nInforme uma matriz qualquer: \n");
                                                        //// arquivando matriz qualquer
    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {
            scanf ("%d",&matriz[i][j]);
        }
    }

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                               //// multiplicacao 1
            int soma = 0;

            for (int k = 0; k < tam; k++)
            {

                soma += drazin[i][k] * matriz[k][j];


            }
            mult1[i][j] = soma;
            soma = 0;
        }
    }
    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {
            int soma = 0;                               //// multiplicacao 2


            for (int k = 0; k < tam; k++)
            {

                soma += mult1[i][k] * drazin[k][j];


            }
            mult_final[i][j] = soma;
            soma = 0;
        }
    }


    printf ("\nA matriz de Drazin: \n");

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                                   //// imprimindo a matriz drazin
            printf ("%d ", drazin[i][j]);
        }
        printf ("\n");
    }

    printf ("\nA matriz qualquer: \n");

    for (int i = 0; i < tam; i++)
        {                                       //// imprimindo a matriz qualquer

        for (int j = 0; j < tam; j++)
        {
            printf ("%d ", matriz[i][j]);
        }

        printf ("\n");
    }

    printf ("\nA matriz resultante das multiplicacoes: \n");
    for (int i = 0; i < tam; i++)
        {

        for (int j = 0; j < tam; j++)
        {                                                               //// imprimindo a matriz resultante
            printf ("%d ", mult_final[i][j]);
        }

        printf ("\n");
    }

    for (int i = 0; i < tam; i++)
        {                                                            //// verificando

        for (int j = 0; j < tam; j++)
        {

            if (mult_final[i][j] != drazin[i][j])
            {
                printf ("\n\nA matriz NAO eh de Drazin!!!\n\n");
                return 0;
            }

        }

    }

    printf ("\n\nA matriz eh de Drazin!!!\n\n");



return 0;
}
