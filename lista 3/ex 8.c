/* Declare um arranjo de estruturas para armazenar as informacoes de 5 produtos
(nome, codigo, preco) e imprima seus valores. */

#include <stdio.h>
#include <stdlib.h>

#define qnt 5   /* Quantidade de produtos */

typedef struct {    /* Estrutura */
    char nome[20];
    int codigo;
    float preco;
} inf_prod;

    void armazenar (inf_prod * produtos, int i)     /* Funcao para armazenar as informacoes */
    {
        printf ("\nInforme nome, codigo e preco do produto %d: \n\n",i+1);
        scanf("%s",produtos->nome);
        scanf ("%d",&produtos->codigo);
        scanf ("%f",&produtos->preco);
        getchar();
    }

    void imprimir (inf_prod produtos[], int i)  /* Funcao para imprimir as informacoes */
    {   printf ("\nInformacoes do produto %d: \n",i+1);
        printf ("Nome:%s\nCodigo: %d\nPreco: %.2f",produtos[i].nome, produtos[i].codigo, produtos[i].preco);
        printf ("\nFim das informacoes do produto %d\n",i+1);
    }


int main ()
{
    inf_prod produtos[qnt];     /* Atribuindo a um vetor de structs */

    for(int i = 0; i < qnt ; i++)   /* Chamando a funcao pela quantidade de produtos */
    {
        armazenar (&produtos[i], i);
    }

    for (int i = 0; i < qnt; i++) /* Igual ao de cima, só que para imprimir */
    {
        imprimir (produtos, i);
    }


    return 0;
}