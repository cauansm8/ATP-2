#include <stdio.h>
// Declare um array de 5 caracteres e inicialize-o com as letras
// ’a’, ’b’, ’c’, ’d’ e ’e’. Imprima os elementos do array.

int main (){

char str [5]; //////atribuindo
str[0] ='a';
str[1] ='b';
str[2] ='c';
str[3] ='d';
str[4] ='e';

int i=0;


printf("\nImprimindo letras de a - e: \n");
do{
    printf ("%c\n",str[i]); //////// mostrando
    i++;
}
while (i<5);




return 0;
}
