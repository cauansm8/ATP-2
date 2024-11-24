/* Utilize a definicao de tipos enumeraveis para representar os meses do ano e
imprima os valores. */

#include <stdio.h>

enum meses { //// enumerando os meses
    jan = 1,
    fev,
    mar,
    abr,
    maio,
    jun,
    jul,
    ago,
    set,
    out,
    nov,
    dez
};

int main ()
{
    printf ("\n%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", jan, fev, mar, abr, maio, jun, jul, ago, set, out, nov, dez);
        //// printando os valores de cada mes


    return 0;
}