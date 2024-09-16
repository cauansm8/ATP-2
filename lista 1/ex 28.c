#include <string.h>
#include <stdio.h>


int main ()
{
    //// Escreva um programa em C que leia uma string e substitua
    //// todas as ocorrencias de um caractere por outro.
    char string[20], l1, l2;
    int i=0;

    printf ("Informe uma string: ");
    gets (string);

    fflush(stdin);
    printf ("\nInforme uma letra da string: ");
    scanf ("%c",&l1);
    fflush(stdin);
    printf ("\nInforme uma letra: ");
    scanf ("%c",&l2);

    do
    {
        if (string[i]==l1){
            string[i]= l2;
        }

        i++;

    }while (string[i]!='\0');

    printf ("\nA nova string: %s",string);

    return 0;
}
