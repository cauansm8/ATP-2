#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[])
{
//// Escreva um programa em C que receba 3 numeros inteiros como
//// argumentos na linha de comando e imprima a soma deles.


    int soma = 0;
    for (int i = 1; i < argc ; i++ ){

        soma += atoi (argv[i]);


    }

    printf("\nNumero de argumentos: %d\n", argc);
    printf ("\nA soma: %d", soma);








    return 0;
}
