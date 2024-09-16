#include <stdio.h>

int main ()
{
 //// Escreva um programa em C que conte o numero de elementos
 //// pares e  impares em um array de 20 inteiros.

 int array[20], i=0, par=0, impar=0;


 printf ("\nInforme 20 numeros: \n");
 do
 {
     scanf ("%d",&array[i]);
     i++;

 }while (i<20);

 i=0;

 do
 {
     if (array[i]%2==0){ ////// se o n° ter resto 0 quando /2 -> par
        par++;
     }
     else {
        impar++;        ///// se nao -> impar
     }
     i++;
 }while (i<20);

 printf ("\nA quantidade de pares (considerando o 0): %d\n", par);
 printf ("\nA quantidade de impares: %d\n", impar);



    return 0;
}
