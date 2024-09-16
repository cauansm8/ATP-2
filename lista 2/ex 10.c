#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 4

int main ()
{
    //// Escreva um programa em C que encontre o menor elemento em uma matriz 4x4.

    int m[4][4], menor;



    printf ("Informe 16 numeros: \n");


    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){  //// arquivando
            scanf ("%d",&m[i][j]);
        }
    }

    printf ("\n\n");

    printf ("\n\nA matriz formada: \n");

    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){      //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");


    menor = m[0][0];
    for (int i=0; i<lin; i++){
        for (int j=1; j<col; j++){
            if (m[i][j]<menor){         //// verificando
                menor = m[i][j];
            }
        }
    }

    printf ("O menor: %d\n\n",menor);  //// imprimindo





    return 0;
}
