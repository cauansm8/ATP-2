#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main ()
{
//// Escreva um programa em C que realize a rotacao de uma matriz
//// quadrada 5x5 no sentido anti-horario.
    int m[tam][tam], m2[tam][tam];



    printf ("Informe 25 numeros: \n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            scanf ("%d",&m[i][j]);  //// arquivando
        }
    }

    printf ("\n\nA matriz formada: \n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {                                                   //// imprimindo
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {                                        //// rotacionando
            m2[j][i] = m[i][4-j];
        }
    }

    printf ("\n\nA nova matriz formada: \n");
    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)             //// imprimindo
        {
            printf ("%d ",m2[i][j]);
        }
        printf ("\n");
    }



    return 0;
}
