#include <stdio.h>
#include <stdio.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que encontre o maior elemento em uma matriz 3x3.
    int m[3][3], maior;


    printf ("Informe 9 numeros: \n");

    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){      //// arquivando
            scanf ("%d",&m[i][j]);
        }
    }

    printf ("\n\n");

    printf ("\nA matriz formada: \n");

    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){          //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");


    maior = m[0][0];
    for (int i=0; i < lin; i++){
                                            //// imprimindo
        for (int j=1; j < col; j++){

            if (m[i][j] > maior){
                maior = m[i][j];
            }
        }
    }

    printf ("O maior: %d\n\n",maior);





    return 0;
}
