/* Declare e inicialize uma estrutura aninhada para armazenar as informacoes de
uma data (dia, mes, ano) e imprima seus valores. */
#include <stdio.h>
#include <stdlib.h>


typedef struct {    /* Estrutura de informações (essa parte ficará dentro da outra estrutura) */
    int dia;
    char mes[20];
    int ano;
} data;

typedef struct{     /* Estrutura mais externa */
    
    data data;

} DATA;



void arquivar (DATA * dia_importante)       /* ARQUIVANDO AS INFORMAÇÕES */
{
    printf ("Informe o dia, o mes e o ano: \n\n");
    scanf ("%d",&dia_importante->data.dia);
    getchar();
    scanf ("%s",dia_importante->data.mes);
    scanf ("%d",&dia_importante->data.ano);

}

void imprimir (DATA dia_importante)     /* IMPRIMINDO AS INFORMAÇÕES */
{
    printf ("\nO dia: %d\nO mes: %s\nO ano: %d\n\n",dia_importante.data.dia, dia_importante.data.mes, dia_importante.data.ano);
}



int main ()
{
    DATA dia_importante;
    arquivar (&dia_importante);     /* CHAMANDO AS FUNÇÕES */
    imprimir (dia_importante);


    return 0;
}