#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

//// Escreva um programa em C que preencha um array de 12
//// inteiros com n ́umeros aleat ́orios entre -20 e 20. Em seguida, conte e imprima
//// quantos n ́umeros s ̃ao negativos.
srand (time(NULL));

int n[12], i=0, neg=0, posit=0, zero=0;

do{
n[i] = -20 + rand() % 41;

if (n[i]>=-20 && n[i]<=20){
    printf ("\n%d",n[i]);

    if (n[i]>0){
        posit++;
    }
    if (n[i]<0){
        neg++;
    }
    if (n[i]==0){
        zero++;
    }



    i++;
}




}while (i<12);

printf ("\n\nPositivos: %d\n",posit);
printf ("\nNegativos: %d\n", neg);
printf ("\nZeros: %d\n", zero);


return 0;
}
