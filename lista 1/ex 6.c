#include <stdio.h>
int main (){
///// Escreva um programa em C que leia 10 valores inteiros e
///// calcule a soma de todos os elementos do array.

int nm[10], soma=0, i=0;


    printf ("Informe 10 numeros: \n");

do{
    scanf ("%d",&nm[i]);
    soma += nm[i];
    i++;



}while (i<10);

printf ("\nA soma: %d\n", soma);



return 0;
}
