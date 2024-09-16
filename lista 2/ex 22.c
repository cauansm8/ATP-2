#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    ///// Escreva um programa em C que preencha uma matriz 4x4 com numeros aleatorios
    ///// e depois ordene os elementos de cada linha.
    int m[4][4], alea, aux;

    srand (time(NULL));




    for (int i=0; i < 4; i++)
    {
        for (int j=0; j < 4; j++)
        {                                   //// arquivando numeros aleatorios na matriz
            alea = rand () % 100;
            m[i][j] = alea;
        }
    }
    printf ("\n\nA matriz antes de ordena-la na linha: \n\n");

    for (int i=0; i < 4; i++)
    {
        for (int j=0; j < 4; j++)
        {                                                   //// printando antes
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    for (int i=0; i < 4; i++)
    {                                               //// contador para linha

        for (int j=0; j < 4; j++)
        {                                        //// contador para coluna (serve para manter fixo um n e
                                            //// comparar com outros (representacao - k)

            for (int k=0; k <4 ; k++)
            {
            if (m[i][j] < m[i][k])
            {
                            //// CURIOSIDADE: eu tinha colocado > pq fazia mais sentido na minha cabeca
                            //// mas nao bateu

                aux = m[i][j];
                m[i][j] = m[i][k];          //// invertendo
                m[i][k] = aux;

            }
            }
        }


    }


        printf ("\n\nA matriz depois da ordenacao: \n\n");

        for (int i=0; i < 4; i++)
        {
        for (int j=0; j < 4; j++)
        {                                       //// printando o depois
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }


    return 0;
}
