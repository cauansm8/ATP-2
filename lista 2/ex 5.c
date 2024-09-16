#include <stdio.h>
#include <stdlib.h>

#define linha 3
#define coluna 2

int main ()
{
    //// Escreva um programa em C que transponha uma matriz 3x2 parauma matriz 2x3.
    int matriz[3][2], matrizT[2][3];


    printf ("Informe 6 numeros: \n");

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){   //// arquivando
            scanf ("%d",&matriz[i][j]);
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0, k=0; j<3; j++, k++){  //// criando a transposta
        matrizT[i][j] = matriz[k][i];

        }
    }


    printf ("Matriz original: \n");
    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){ //// imprimindo
            printf ("%d ",matriz[i][j]);
        }
        printf ("\n");
    }

    printf ("\nMatriz Transposta: \n");
    for (int i=0; i<2; i++){                //// imprimindo transposta
        for (int j=0; j<3; j++){
            printf ("%d ",matrizT[i][j]);
        }
        printf ("\n");
    }





    return 0;
}
