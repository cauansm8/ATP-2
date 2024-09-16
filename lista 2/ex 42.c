#include <stdio.h>
#include <stdio.h>

#define tam 2

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 2x2  e uma matriz de Householder.
    int m[tam][tam], mt[tam][tam], mr[tam][tam], ide[tam][tam];


    /// ortogonal -> (matriz * matriz^transposta = identidade)
    /// simetrica -> matriz = m_transposta



    printf ("\nInforme 4 valores: \n");         //// ex:  0 1
                                                ////      1 0
    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                 //// arquivando as matrizes
            scanf ("%d",&m[i][j]);
        }
    }

    printf ("\n\nA matriz formada: \n");

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                //// imprimindo a matriz
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }




    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                               //// formando a matriz transposta
            mt[i][j] = m[j][i];
        }
    }

    printf ("\n\nA matriz transposta: \n");

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                //// imprimindo a matriz transposta
            printf ("%d ",mt[i][j]);
        }
        printf ("\n");
    }


    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                   //// multiplicando a matriz pela transposta
        int soma = 0;
            for (int k = 0; k < tam; k++)
            {
                soma += m[i][k] * mt[k][j];
                }
            mr[i][j] = soma;
            soma = 0;
        }
    }

    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                   //// formando a matriz identidade
                if (i == j){
                        ide[i][j] = 1;
                }
                else       {
                ide [i][j] = 0;
                }
        }
    }


    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                                       //// verificando se e simetrica
            if (m[i][j] != mt[i][j]){
                printf ("\nA matriz NAO eh simetrica (matriz diferente de sua transposta), logo NAO eh matriz de Householder!!!\n\n");
                return 0;
            }
        }
    }


    printf ("\n\nA matriz resultante da multiplicacao: \n");
    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                               //// imprimindo a matriz resultante
            printf ("%d ",mr[i][j]);
        }
        printf ("\n");
    }


    printf ("\n\nA matriz identidade: \n");
    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                           //// imprimindo a matriz identidade
            printf ("%d ",ide[i][j]);
        }
        printf ("\n");
    }



    for (int i = 0; i < tam; i++)
        {
        for (int j = 0; j < tam; j++)
        {                                           //// verificando se e matriz ortogonal (m_resultado = m_identidade)
            if (mr[i][j] != ide[i][j])
            {
                printf ("\nA matriz nao e ortogonal (m * m_transposta != m_identidade), logo NAO e matriz de Householder\n\n");
                return 0;
            }
        }
    }
    printf ("\n\nA matriz eh matriz de Householder!!!!\n\n");



    return 0;
}
