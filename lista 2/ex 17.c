#include <stdio.h>
#include <stdlib.h>


#define lin 3
#define col 3
int main ()
{

//// Escreva um programa em C que encontre a posicao (linha e coluna) de um elemento especifico
 ////   em uma matriz 3x3.
    int m[3][3], n, posi_l = 0, posi_c = 0;


    printf ("\nInforme 9 numeros: \n");


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]); //// arquivando os numeros
        }
    }
    printf ("\n\nInforme uma numero para ser buscado: ");       //// arquivando o numero da busca
    scanf ("%d",&n);

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            if (n == m[i][j]){              //// arquivando onde esta o numero
                posi_l = i+1;
                posi_c = j+1;
            }
        }
    }

    printf ("\n\nA matriz formada: \n\n");

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            printf("%d ",m[i][j]);  //// imprimindo a matriz
        }
        printf ("\n");
    }
    printf ("\n\n");

    if (posi_l!= 0 && posi_c != 0)
    {
    printf ("O elemento '%d' esta na linha %d e coluna %d\n\n\n", n,posi_l,posi_c);     //// mostrando a posicao
    }

    else
    {
        printf ("\nEsse numero NAO esta na matriz!!\n");        //// se nao estiver na matriz, mostra essa mensagem
    }



return 0;
}
