#include <stdio.h>
int main (){
//// Escreva um programa em C que leia 5 valores inteiros, armazene-
//// os em um array e depois imprima os valores na ordem inversa.

int nms[5], i=0;

    printf ("Informe 5 numeros: \n");

do{
    scanf ("%d",&nms[i]);
    i++;

} while (i<5);

printf ("\nIMPRIMINDO AO CONTRARIO\n");

do{
    printf ("%d\n",nms[i-1]);
    i--;


}
while (i!=0);


return 0;
}
