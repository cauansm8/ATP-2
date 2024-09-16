#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
//// Escreva um programa em C que verifique se uma matriz 3x3  e
//// uma matriz esparsa (maioria dos elementos sao zeros).

int m[lin][col], cont=0;

    printf ("Informe 9 numeros: \n\n");
    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            scanf("%d",&m[i][j]);       //// arquivando

            if (m[i][j]==0){            //// contador de quantos zeros tem
                cont++;
            }
        }
    }
    printf ("\n\nA matriz:\n\n");

     for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
            {
            printf ("%d ",m[i][j]);     //// imprimindo

            }
            printf ("\n");
        }


    int media = (lin * col) / 2;

    if (cont > media){
        printf ("\n\nA matriz eh esparsa (a maioria dos elementos sao zeros)\n\n");
    }
    else {
        printf ("\n\nA matriz nao eh esparsa (a maioria dos elementos nao sao zeros)\n\n");
    }





    return 0;
}
