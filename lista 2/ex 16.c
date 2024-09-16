#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 5

int main ()
{
//// Escreva um programa em C que preencha uma matriz 5x5 com numeros primos.
    int m[5][5];

    printf ("Informe uma matriz apenas com numeros primos: \n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf("%d",&m[i][j]);       //// arquivando os valores

            if (m[i][j]!=1){

                if ((m[i][j] % 2==0 && m[i][j]!=2) || (m[i][j] % 3==0 && m[i][j]!=3) || (m[i][j] % 5==0 && m[i][j]!=5)){
                    printf ("\n O numero nao e primo\n");       //// verificando se eh primo
                    return 1;
                }
            }

            else {

                printf ("\n O numero nao e primo\n");   //// se nao 1 (NAO EH PRIMO), logo termina o programa
                return 1;

            }
        }
    }



        printf ("\n\n A matriz formada: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)     //// imprimindo a matriz
        {
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }



return 0;
}
