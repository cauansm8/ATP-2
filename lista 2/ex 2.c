#include <stdio.h>

#define linha 4  //// altura
#define coluna 4 //// largura

int main ()
{
    //// Escreva um programa em C que calcule a soma dos elementos de
    //// uma matriz 4x4.


int matriz[linha][coluna], z=0, soma=0;

printf ("Informe 16 numeros: \n");

for (int i=0; i<linha; i++){
    for (int j=0; j<coluna; j++){
        scanf ("%d",&matriz[i][j]); //// criando a matriz

    }
}
    printf ("\nA matriz formada: \n");

for (int i=0; i<linha; i++){
    for (int j=0; j<coluna; j++){
        printf ("%d ", matriz[i][j]); //// imprimindo a matriz

    }
    printf ("\n");
}




for (int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){  //// somando cada termo da matriz
        soma += matriz[i][j];

    }

}

    printf ("\n\nA soma: %d\n",soma);

return 0;
}
