#include <stdio.h>
int main (){
/// Exercıcio 1: Declare um array de 10 inteiros e inicialize-o com valores de 0 a
/// 9. Escreva um programa em C que imprima todos os elementos do array.

int inteiros[10], i=0; //// declarando array

do{
    inteiros[i] = i; ///// inserindo valores de 0 a 9 nos espaços
    i++;
}
while (i!=10);
int j=0;


    printf ("\nImprimindo numeros de 0 a 9: \n");
do{
    printf ("%d\n", inteiros[j]); ////// mostrando os valores em cada espaço
    j++;

}while (j!=10);

}
