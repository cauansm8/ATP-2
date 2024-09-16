#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 4

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 4x4  e uma matriz diagonal. -> SO TEM VALOR NAO NULO NA DIAGONAL
    int m[4][4];                                ////ex : 1 0 0 0
                                                ////     0 1 0 0
                                                ////     0 0 1 0
    printf ("\nInforme 16 numeros: \n");        ////     0 0 0 1

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++){        //// arquivando

            scanf ("%d",&m[i][j]);
        }

    }
    printf ("\n\n\nA matriz formada: \n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++){        //// imprimindo
           printf ("%d ",m[i][j]);
        }

        printf ("\n");
    }

    printf ("\n\n\n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++){

            if (i!=j){

                if(m[i][j]!=0){
                    printf ("\nA matriz nao e diagonal\n\n");           //// verificando se os valores de fora da diagonal sao zero
                    return 0;

                }
            }
        }
    }

    printf ("\n\nA matriz eh diagonal\n\n");


return 0;
}
