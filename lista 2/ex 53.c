#include <stdio.h>
#include <time.h>
#define tam 5

int main ()
{
///// Escreva um programa em C que preencha uma matriz 5x5 com
///// numeros aleatorios e depois encontre o segundo menor elemento.

    srand (time(NULL));

    int m[tam][tam];

    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
            {

            int alea = rand () % 100;
                                            //// arquivando nms aleatorios
            m[i][j] = alea;

        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d  ",m[i][j]);    //// imprimindo
        }
        printf ("\n");
    }

    int menor1, menor2;
    menor1 = m[0][0];
    menor2 = m[0][0];

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
                    if (m[i][j]<menor1)         //// verificando
                    {
                        menor1 = m[i][j];
                    }
        }
    }

    for (int i=0; i<tam; i++)
    {
            for (int j=0; j<tam; j++)
                {                                               ///// para encontrar o segundo menor, primeiro encontramos o primeiro menor
                    if (m[i][j]<menor2 && m[i][j]!=menor1)
                    {                                           //// logo a gente acha um numero q e menor q todos, com excessao do primeiro
                        menor2 = m[i][j];
                    }
            }
    }

    printf ("\n\n\nOs dois menores elementos: %d e %d",menor1,menor2);
    printf ("\n\n\nO segundo menor elemento: %d\n\n\n",menor2);

return 0;
}
