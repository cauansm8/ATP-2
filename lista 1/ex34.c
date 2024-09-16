#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
//// Escreva um programa em C que receba uma string como
//// argumento na linha de comando e conte o numero de caracteres dessa string.

    printf ("\nA quantidade de caracteres: %d\n",strlen(argv[1]));

    return 0;
}
