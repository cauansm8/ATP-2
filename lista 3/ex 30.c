/* Declare e inicialize uma estrutura aninhada para armazenar as informacoes de
um ponto (x, y, z) e imprima seus valores. */

#include <stdio.h>

typedef struct {        //// estrutura interna
    int x;
    int y;
    int z;
} pontos;

typedef struct{     //// estrutura geral
    char tipo_da_funcao [100];
    pontos pontos;
}LOC;

    void arquivar (LOC * coordenada)        //// funcao para arquivar
    {
        printf ("Informe o tipo da funcao, o ponto x, y e z: \n");
        gets (coordenada->tipo_da_funcao);
        scanf ("%d",&coordenada->pontos.x);
        scanf ("%d",&coordenada->pontos.y);
        scanf ("%d",&coordenada->pontos.z);
    }

    void imprimir (LOC coordenada)      //// funcao para imprimir
    {
        printf ("O tipo da funcao: %s\nX: %d\nY: %d\nZ: %d\n\n", coordenada.tipo_da_funcao, coordenada.pontos.x,coordenada.pontos.y,coordenada.pontos.z);
    }


int main ()
{
    LOC coordenada;

    arquivar (&coordenada);     //// chamando as funcoes
    imprimir (coordenada);


}