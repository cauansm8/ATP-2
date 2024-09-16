#include <stdio.h>

#define tam 3

int main ()
{

///// Escreva um programa em C que calcule a media dos elementos de
///// uma matriz 3x3.
        int m[tam][tam];

        printf ("Informe 9 elementos: \n");

        for (int i=0; i < tam; i++)
            {
            for (int j=0; j < tam; j++)
            {                                           //////// arquivando
                scanf ("%d",&m[i][j]);
            }
        }

        printf ("\n\nA matriz formada: \n\n");

        for (int i=0; i < tam; i++)
            {
            for (int j=0; j < tam; j++)
            {
                printf ("%d ", m[i][j]);        //// imprimindo
            }
            printf ("\n");
        }

        float soma=0;

        for (int i=0; i < tam; i++)
            {
            for (int j=0; j < tam; j++)     //// somando
            {
                soma += m[i][j];
            }
        }

        printf ("\n\nA soma dos elementos: %.2f\n",soma);           //// imprimindo
        float media = soma / (tam*tam);
        printf ("\n\nA media dos elementos da matriz: %.2f\n",media);



    return 0;
}
