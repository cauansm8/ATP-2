#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que conte quantos elementos pares existem em uma matriz 3x3.
    int m[3][3], cont=0;


    printf ("Informe 9 numeros: \n");

    for (int i=0; i < lin; i++){
        for (int j=0; j < col; j++){
                                            //// arquivando
            scanf ("%d",&m[i][j]);

            if (m[i][j]%2==0){
                cont++;
            }

        }
    }

    printf ("\n\nA matriz formada: \n");

    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){
            printf ("%d ",m[i][j]);     //// imprimindo

        }
        printf ("\n");
    }
    printf ("\nA quantidade de pares (o 0 tambem esta sendo contado como par!!): %d\n\n",cont);         //// imprimindo





    return 0;
}
