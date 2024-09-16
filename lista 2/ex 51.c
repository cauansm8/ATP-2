#include <stdio.h>
#include <stdlib.h>



#define tam 3

int main ()
{
//// Escreva um programa em C que preencha uma matriz 3x3 com
//// numeros primos e depois calcule o produto dos elementos da diagonal secundaria.
    int m[tam][tam];

    printf ("Informe 9 numeros: \n");


    for (int i = 0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            scanf ("%d",&m[i][j]);  //// arquivando

            if (m[i][j]== 1)            //// verificando
                {
                        printf ("\n\nO numero nao e primo\n\n");
                        return 1;
            }

            if (m[i][j]!=2 && m[i][j]!=3 && m[i][j]!=5 && m[i][j]!=7)
                {

                    if (m[i][j]%2==0 || m[i][j]%3==0 || m[i][j]%5==0 || m[i][j]%7==0)   //// verificando
                        {
                        printf ("\n\nO numero nao e primo\n\n");
                        return 1;
                    }
            }

        }
    }

    printf ("\n\nA matriz formada: \n\n");

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d  ",m[i][j]);    //// imprimir
        }
        printf ("\n");
    }

    int diagonal=1;



        for (int j=tam-1, i=0; j>=0; j--, i++)      //// multiplicando
            {
            diagonal *= m[i][j];
        }

    printf ("\n\nO produto da diagonal secundaria: %d\n\n\n",diagonal);



return 0;
}
