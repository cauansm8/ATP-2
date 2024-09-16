#include <stdio.h>
#include <stdlib.h>

int main ()
{
 //// Escreva um programa em C que calcule o determinante de uma matriz quadrada 3x3.
    int m[3][3];



    printf ("Informe 9 numeros: \n");
    for (int i=0; i < 3; i++)
        {
        for (int j=0; j < 3; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }
    printf ("\n\nA matriz: \n\n");

    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 3; j++)
        {
            printf ("%d ",m[i][j]);     //// imprimindo
        }
        printf ("\n");
    }

    int direita=0, esquerda=0 ,det;

    for (int cont=0, j=0, z=1, k=2;  cont <3 ; cont++, j++, z++, k--)
    {                                                       ///// eu sei q o codigo ta horrivel mas deu certo :)
        if (cont == 2){                                     //// essas letras sao apenas variaveis para ir pulando de valor em valor
            z = 0;                                      //// ex: ( (00 * 11 * 22) + (01 * 12 * 20) + (02 * 10 * 21) -> calculo das diagonais da direita
            k = 1;
        }
        if (cont ==1){
            k = 0;
        }
        direita += m[0][j] * m[1][z] * m[2][k];

    }


    for (int cont=0, j=1, k=2, z=0; cont<3; cont++, k--){ ///// o que vale ali para cima tambem vale para ca

        if (cont==1){   //// calculam as diagonais para a esquerda
            j = 0;
            z = 2;
        }
        if (cont == 2){
            j = 2;
            z = 1;
        }
        esquerda += m[0][j] * m[1][z] * m[2][k];

    }

    det = direita - esquerda;   //// subtraindo

    printf ("\n\nA determinante da matriz: %d\n\n",det);        //// imprimindo





    return 0;
}
