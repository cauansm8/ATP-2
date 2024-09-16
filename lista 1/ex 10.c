#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
//// Escreva um programa em C que preencha um array de 10
//// inteiros com n ́umeros aleat ́orios entre 50 e 150. Calcule e imprima a m ́edia dos
//// elementos do array.

int nm[10], i=0, soma=0;
float media;
srand (time (NULL));


do{
nm[i] = 50 + rand ()% 150 ;

if (nm[i]>=50 && nm[i]<=150){
printf ("%d\n",nm[i]);
soma += nm[i];
i++;
}



}while (i<10);
printf ("\nA soma: %d\n",soma);
printf ("\nA media: %.2f\n",soma/10.0);



return 0;
}
