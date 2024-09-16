#include <stdio.h>
#include <string.h>


int main ()
{
    //// Escreva um programa em C que declare um array de 12
    //// caracteres e use aritmetica de ponteiros para inverter a ordem dos caracteres no
    //// array.

    char string[12], *string_pont[12];
    int i=0;
    printf ("Informe uma string com no maximo 12 caracteres: ");
    gets (string);

    if (strlen(string)>12){
        printf ("\nString com mais de 12 caracteres!!!\n");
        return 1;
    }


    do
    {
    string_pont[i] = &string[11-i]; //// passa os enderecos invertidos para a string_ponteiro
    i++;



    }while(i<12);

    i=0;
    printf ("\nA string invertida usando ponteiro: ");

    do
    {
        printf ("%c",*string_pont[i]); //// printa buscando os caracteres (busca a partir dos enderecos anteriores)
        i++;

    }while (i<12);






    return 0;
}
