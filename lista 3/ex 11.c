/* Utilize a definicao de tipos enumeraveis para representar os dias da semana e
imprima os valores. */

#include <stdio.h>
#include <stdlib.h>

enum  dias{        /* Enumeracao dos dias da semana */
    Domingo = 1,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main () 
{           /* Printando com base nas variaveis (dias) os valores correspondentes */
    printf ("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado);


    return 0;
}

    