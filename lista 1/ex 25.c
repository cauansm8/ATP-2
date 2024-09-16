#include <stdio.h>
#include <string.h>


int main ()
{
    //// Escreva um programa em C que leia uma string e conte o numero
    //// de caracteres, palavras e linhas na string.

    char string[100];
    int carac=0, palav=0, i=0, i2=0, i3=0, lin=0;

    printf ("Informe uma string: ");
    fgets (string, 100, stdin);

    printf ("\nTamanho: %d\n",strlen(string));

    do /////// contador de caracteres
    {
    if ((string[i]>='A' && string[i]<='Z')|| (string[i]>='a' && string[i]<='z')){
         carac++;
    }
    i++;



    }while (string[i] != '\0');

    do //// contador de palavras
    {
    if ((string[i2]>='A' && string[i2]<='z') && (string[i2+1]== 32 || string[i2+1]=='\n')){
        palav++;
    }

    i2++;

    }while (string[i2] != '\0');

    do
    {
    if (string[i3]== '\n'){
        lin++;
    }

    i3++;

    }while (string[i3] != '\0');


    printf ("\nQuantidade de caracteres: %d\n", carac);
    printf ("\nQuantidade de palavras: %d\n",palav);
    printf ("\nQuantidade de linhas: %d\n",lin);







    return 0;
}
