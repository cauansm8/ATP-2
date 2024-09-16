#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main () //// Escreva um programa em C que leia duas strings e concatene-
            //// as. Imprima a string resultante.
{
    char string1[20], string2[20];
    printf ("Informe uma string: ");
    gets (string1);
    printf ("Informe uma string: ");
    gets (string2);

    strcat (string1, string2);


    printf ("A nova string: %s\n", string1);





    return 0;
}
