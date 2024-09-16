#include <stdio.h>
#include <time.h>

#define tam 4

int main ()
{
    int m[tam][tam];
//// Escreva um programa em C que preencha uma matriz 4x4 com
//// numeros aleatorios e depois encontre o terceiro maior elemento.
    srand (time(NULL));

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            int alea = rand () % 100;   //// arquivando
            m[i][j] = alea;
        }
    }

    printf ("\n\nA matriz formada: \n\n");
    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            printf ("%d  ",m[i][j]);    //// imprimindo
        }
        printf ("\n");
    }
    int maior1, maior2, maior3;
    maior1 = m[0][0];
    maior2 = m[0][0];
    maior3 = m[0][0];


    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            if (m[i][j] > maior1)
            {
                maior1 = m[i][j];       //// buscando o maior
            }
        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            if (m[i][j]>maior2 && m[i][j]!=maior1)  //// buscando o segundo maior
            {
                maior2 = m[i][j];
            }
        }
    }

    for (int i=0; i < tam; i++)
        {
        for (int j=0; j < tam; j++)
        {
            if (m[i][j] > maior3 && m[i][j]!=maior1 && m[i][j]!=maior2) //// buscando o terceiro maior
            {
                maior3 = m[i][j];
            }
        }
    }

    printf ("\n\nO maior: %d\n",maior1);            //// imprimindo
    printf ("\n\nO  segundo maior: %d\n",maior2);
    printf ("\n\nO terceiro maior: %d\n",maior3);
    return 0;
}
