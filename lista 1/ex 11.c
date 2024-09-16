#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
//// Escreva um programa em C que preencha um array de 15
//// inteiros com n ́umeros aleat ́orios entre 0 e 50. Em seguida, encontre e imprima
//// o maior valor do array.

int n[15], i=1, maior;

srand (time(NULL));

n[0] = rand () % 50;

printf ("%d\n",n[0]);

maior = n[0];

do{
n[i] = rand () % 51;

printf ("%d\n",n[i]);

if (n[i]>maior){
    maior = n[i];
}


i++;

}

while (i<15);

printf ("\nMaior numero: %d\n", maior);




return 0;
}
