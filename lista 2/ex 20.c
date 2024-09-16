#include <stdio.h>
#include <stdlib.h>

int main ()
{
//// Escreva um programa em C que calcule a soma das colunas de uma matriz 4x3.

int m[4][3], soma[3]={0,0,0};


printf ("\nInforme 12 numeros: \n");

for (int i=0; i < 4; i++)
{
    for (int j=0; j < 3; j++)
    {
        scanf ("%d",&m[i][j]);  //// arquivando
    }
}
printf ("\n\nA matriz formada: \n");

for (int i=0; i < 4; i++)
{
    for (int j=0; j < 3; j++)
    {
        printf ("%d ",m[i][j]);         //// imprimindo
    }
    printf ("\n");
}



for (int j=0; j<3; j++){
    for (int i=0; i<4; i++){            //// somando por coluna
        soma[j] += m[i][j];
    }
}


printf ("\n\nA soma de cada coluna: \n");


for (int i=0; i<3; i++){
    printf ("\nColuna %d: %d\n",i+1, soma[i]); //// imprimindo a soma de cada coluna
}














    return 0;
}
