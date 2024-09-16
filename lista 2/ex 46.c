#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5

int main ()
{
//// Escreva um programa em C que preencha uma matriz 5x5 com
//// numeros aleatorios e depois encontre o segundo maior elemento.

    int m[tam][tam], maior1, maior2, alea;

    srand (time(NULL));

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            alea = rand () % 99;    //// arquivando
            m[i][j] = alea;
        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo
        }
        printf ("\n");
    }

    maior1= m[0][0];
    maior2=m[0][0];

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            if (maior1 < m[i][j]){  //// verificando
                maior1 = m[i][j];
            }
        }
    }

        printf ("\nO primeiro maior elemento: %d",maior1);

    for (int i=0; i<tam; i++){
        for (int j=0; j<tam; j++){
            if (m[i][j] > maior2 && m[i][j]<maior1){
                maior2 = m[i][j];
            }
        }
    }

        printf ("\nO segundo maior elemento: %d\n\n",maior2);



    return 0;
}
