#include <stdio.h>
#include <stdlib.h>

//// Escreva um programa em C que use um array de ponteiros para
//// armazenar e imprimir 5 strings.

int main (){

    char *pont[5];                          //// ponteiro com 5 strings

    for (int i = 0; i < 5; i++){
        pont[i] = malloc(20 * sizeof(char)); //// alocando espaco para cada string (20 caracteres)
    }


    printf ("\nInforme 5 strings: \n");

    for (int i = 0; i < 5; i++){            //// armazenando as strings
        gets (pont[i]);
    }


    for (int i = 0; i < 5 ; i++){           //// imprimindo as strings
        printf ("\nString %d: %s\n",i+1, pont[i]);
    }

    for (int i = 0; i < 5; i++){
        free (pont[i]);
    }

return 0;
}
