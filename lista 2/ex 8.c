#include <stdio.h>
#include <stdlib.h>

#define linha 4
#define coluna 4


int main ()
{
    //// Escreva um programa em C que realize a rotacao de uma matriz quadrada 4x4 no sentido horario.
    int m[4][4], mh[4][4];


    printf ("Informe 16 numeros: \n");

    for (int i=0; i < linha ; i++){
        for (int j=0; j< coluna ; j++){ //// arquivando
            scanf ("%d",&m[i][j]);
        }
    }

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){       //// rotacionado
            mh[i][j] = m[3-j][i];
        }
    }


    printf ("\nA matriz antes da rotacao: \n");

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){   //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n");


    printf ("A matriz depois da rotacao: \n");

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){   //// imprimindo
            printf ("%d ",mh[i][j]);
        }
        printf ("\n");
    }


    return 0;
}
