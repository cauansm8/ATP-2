#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
//// Escreva um programa em C que preencha um array de 20 inteiros
//// com n ́umeros aleat ́orios entre 1 e 100. Em seguida, imprima todos os elementos
//// do array.


int n[20], i=0;
srand (time (NULL)); //// evita a repetição dos numeros aleatorios

do{
    n[i] = 1 + rand () % 100; //// numeros de 0 a 100 sao arquivados


i++;
}while (i<20);
 i=0;
do{
    printf ("O numero %d: %d\n", i+1, n[i]);
    i++;




}while (i<20);






return 0;
}
