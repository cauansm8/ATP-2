#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    //// Escreva um programa em C que use um array de ponteiros
    //// para armazenar 4 strings e encontre a string de maior comprimento.


    char *pont[4], maior[20], i = 0;

    for (int k = 0; k < 4; k++){
        pont[k] = malloc (20 * sizeof (char)); //// reservando espaco de caracteres
    }

    printf ("\nInforme 4 strings: \n");
    for (int k = 0; k < 4; k++){               //// arquivando as strings
        gets (pont[k]);
    }

    strcpy (maior, pont[0]);

    do
    {
     if (strlen (pont[i]) > strlen (maior)){ /////// compara o tamanho da maior palavra considera com a palavra de comparacao
        strcpy (maior, pont[i]);
     }
     i++;

    }while (i < 4);

    printf ("A maior string do array de ponteiros: %s\n",maior);


    return 0;
}
