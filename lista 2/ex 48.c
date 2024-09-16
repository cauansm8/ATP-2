#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 4

int main ()
{
//// Escreva um programa em C que preencha uma matriz 4x4 com
//// numeros aleatorios e depois calcule a media dos elementos acima da diagonal
//// principal.


    srand (time(NULL));


    int m[tam][tam];


    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {

            int alea = rand () % 100;       //// arquivando
            m[i][j] = alea;
        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf  ("%d  ",m[i][j]);   //// imprimindo
        }
        printf ("\n");
    }

    float soma=0, media;

    for (int i=0; i < tam; i++)
        {                            ///// para encontrar valores acima da diago. princ.
        for (int j=0; j < tam; j++)
        {                            ///// buscamos valores tais que j>i
                    if (i!=j && j>i)
                    {
                    soma += m[i][j];
                    }
        }
    }

    media = soma / 6.0 ;

    printf ("\n\nA soma: %.2f",soma);

    printf ("\n\nA media da soma dos elementos acima da matriz principal: %.2f\n\n\n\n\n",media);


return 0;
}
