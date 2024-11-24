/* Utilize a definicao de tipos enumeraveis para representar as estacoes do ano e
imprima os valores. */

#include <stdio.h>

enum {                  /// enumerando as estacoes
    inverno = 1,
    primavera,
    verao,
    outubro
};


int main ()
{
    printf ("As estacoes do ano em numeros (inverno - primavera - verao - outono): %d, %d, %d, %d\n\n",inverno, primavera, verao, outubro);
            //// imprimindo


    return 0;
}