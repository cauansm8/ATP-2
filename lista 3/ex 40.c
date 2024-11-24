/* Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
ponto ‘.’ e imprima seus valores. */

#include <stdio.h>

typedef struct {        //// estrutura 
    int x;
    int y;
    int z;
} pontos;

   


int main ()
{

    pontos coord;

    printf ("Informe os pontos x, y e z: \n");      //// arquivando usando .
    scanf ("%d",&coord.x);
    scanf ("%d",&coord.y);
    scanf ("%d",&coord.z);

      printf ("Os pontos: \nX: %d\nY: %d\nZ: %d\n\n", coord.x, coord.y, coord.z);  //// imprimindo usando .

    return 0;
}