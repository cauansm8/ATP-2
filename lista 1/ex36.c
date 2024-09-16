#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
//// Escreva um programa em C que receba 5 numeros inteiros
//// como argumentos na linha de comando e imprima o maior deles.
    int maior = atoi(argv[1]);

    for (int i = 2; i < argc; i++){ //// comeca em 2 pq o zero e o nome do arquivo E o 1 ja esta considerado como o maior

        if (atoi (argv[i]) > maior){
            maior = atoi (argv[i]);
        }
    }
    printf ("\nO maior entre esses 5 numeros: %d\n\n",maior);

    return 0;
}
