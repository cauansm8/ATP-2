#include <stdio.h>
#include <stdlib.h>


#define tam 3

int main ()
{
//// Escreva um programa em C que verifique se duas matrizes 3x3 sao semelhantes.

        ////            A   =        M^-1    *   B   *  M

    int A[tam][tam], M[tam][tam], M_inversa[tam][tam], B[tam][tam], mult1[tam][tam], mult2[tam][tam];


    printf ("\nInforme 9 numeros para formar a matriz A: \n");


    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){          //// arquivando A ex: 9 9 9
            scanf ("%d",&A[i][j]);                      ////          9 9 9
        }                                               ////          9 9 9
    }


    printf ("\nInforme 9 numeros para formar a matriz M: \n");

    for (int i = 0; i < tam; i++){              //// arquivando M ex: 1 1 1
        for (int j = 0; j < tam; j++){                  ////          1 1 1
            scanf ("%d",&M[i][j]);                      ////          1 1 1
        }
    }


    printf ("\nInforme 9 numeros para formar a matriz M inversa: \n");

    for (int i = 0; i < tam; i++){           //// arquivando M_inversa: ex:  1 1 1
        for (int j = 0; j < tam; j++){                      ////             1 1 1
            scanf ("%d",&M_inversa[i][j]);                  ////             1 1 1
        }
    }



    printf ("\nInforme 9 numeros para formar a matriz B: \n");

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){                  //// arquivando B ex: 1 1 1
            scanf ("%d",&B[i][j]);                                       //// 1 1 1
        }                                                                //// 1 1 1
    }



    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){

            int soma = 0;

                for (int k = 0; k < tam; k++){                 //// fazendo a multiplicacao de M_inversa * B
                  soma   += M_inversa[i][k] * B[k][j];
                    }
            mult1[i][j] = soma;

        }
    }



    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){

            int soma = 0;

                for (int k = 0; k < tam; k++){          //// fazendo a multiplicacao de M_resultado1 * M
                  soma   += mult1[i][k] * M[k][j];
                    }
            mult2[i][j] = soma;

        }
    }



    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (A[i][j] != mult2[i][j]){
                printf ("\n\nNAO sao matrizes semelhantes (A != multiplicacao M^-1  *   B  * M) !!\n\n");
                return 0;
            }
        }
    }

    printf ("\n\n As matrizes SAO semelhantes!!\n\n");





return 0;
}
