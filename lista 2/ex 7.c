#include <stdio.h>
#include <stdlib.h>

#define linha 3
#define coluna 3

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 3x3  e simetrica. -> matriz = matriz_transposta

                                                ////      5   1    2
    int mp[3][3], mt[3][3];                     //// ex:  1   6    3
                                                ////      2   3    8
                                                ////
    printf ("Informe 9 numeros: \n");

    for (int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){        //// arquivando a matriz
        scanf ("%d",&mp[i][j]);
        }
    }

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){       //// criando a transposta
            mt[i][j] = mp[j][i];
        }
    }

    printf ("\n\n");

    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){   //// imprimindo a matriz
            printf ("%d ",mp[i][j]);
        }
        printf ("\n");
    }


    printf ("\n\n");


    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){ //// imprimindo a matriz transposta
            printf ("%d ",mt[i][j]);
        }
        printf ("\n");
    }



    for (int i=0; i<linha; i++){
        for (int j=0; j<coluna; j++){

            if (mp[i][j] != mt[i][j]){      //// verificando se as duas sao iguais


            printf ("\nMatriz nao simetrica\n");
            return 0;
            }
        }
    }

    printf ("\nMatriz simetrica\n");



return 0;
}
