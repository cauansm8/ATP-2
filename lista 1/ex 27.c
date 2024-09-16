#include <stdio.h>
#include <string.h>


int main () //// Escreva um programa em C que leia uma string e verifique
            //// se ela  e um palindromo.
{
char string[20];
int i=0, verif=1, tamanho;


printf ("Informe uma string: ");
gets (string);
tamanho = strlen(string)-1;
do
{
   if (string[i] == string[tamanho-i]){
    i++;
   }
   else {
    verif=0;
   }



}while (i<strlen(string) && verif != 0);


if (verif==1){
    printf ("\nPalindromo\n");
}
if (verif==0){
    printf ("\nNao e palindromo\n");
}


return 0;
}
