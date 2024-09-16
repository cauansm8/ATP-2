#include <stdio.h>
#include <stdlib.h>

#define linha 5
#define coluna 5

int main ()
{

    //// Escreva um programa em C que calcule a diagonal principal de uma matriz 5x5.
    int matriz[5][5];


    printf ("Informe 25 numeros: \n");

    for (int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){            //// arquivando
            scanf ("%d", &matriz[i][j]);
        }
    }

    int resultado=1;
    for (int i=0, j=0; i<5; i++, j++){          ////  multiplicando os valores da diagonal principal
        resultado = resultado * matriz[i][j];
    }

    printf ("\n\n");

    for (int i=0; i<linha; i++){                //// imprimindo
        for (int j=0; j<coluna; j++){
            printf ("%d ",matriz[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");
    printf ("Diagonal principal: %d\n",resultado);   //// imprimindo


    return 0;
}
