#include <stdio.h>

int main (){
// Declare um array de 7 inteiros e inicialize-o com os valores dos
// primeiros 7 n ́umeros primos. Escreva um programa em C que imprima todos os
// elementos do array.
int array[7]; /////// declarando array
array[0]=2;
array[1]=3;
array[2]=5;
array[3]=7;
array[4]=11;
array[5]=13;
array[6]=17;

int i=0;

    printf ("Imprimindo os numeros primos: \n");

do{
    printf ("%d\n",array[i]); //// mostrando o valor de cada array
    i++;

}while (i<7);


return 0;
}
