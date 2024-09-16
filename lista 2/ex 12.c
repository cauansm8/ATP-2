#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 4

int main ()
{
    //// Escreva um programa em C que calcule a media dos elementos de uma matriz 2x4.
    int m[2][4], soma=0;
    float media;


    printf ("Informe 8 numeros: \n");

    for (int i=0; i < lin; i++){

        for (int j=0; j < col; j++){
                                        //// arquivando
            scanf ("%d",&m[i][j]);
            soma += m[i][j];
        }
    }

    printf ("\n\n\n A matriz formada: \n");

    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){      //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n\n");

    media =  soma / 8.0;
    printf ("A soma: %d ||||| A media: %.2f\n\n\n\n", soma, media); //// imprimindo



    return 0;
}
