/* Atribua os valores de uma estrutura de produto para outra e imprima os valores
da nova estrutura. */

#include <stdio.h>
#include <string.h>

typedef struct {        //// estrutura 1
    char nome[100];
    int codigo;
    float preco;
} infos1;

typedef struct {            //// estrutura 2
    char nome[100];
    int codigo;
    float preco;
} infos2;

void arquivar (infos1 *produto)           //// funcao para arquivar
    {
        printf ("Informe o nome, o codigo e o preco do produto: \n");
        gets (produto->nome);
        scanf ("%d",&produto->codigo);
        scanf ("%f",&produto->preco);
        getchar();
    }
    
void passar (infos1 produto1, infos2 *produto2)     //// passando os valores
    {
        strcpy (produto2->nome, produto1.nome);
        produto2->codigo = produto1.codigo;
        produto2->preco =  produto1.preco;
    }

void imprimir (infos2 produto2)             //// imprimindo
{
    printf ("\n\nNome: %s\nCodigo: %d\nPreco: %f\n\n", produto2.nome, produto2.codigo, produto2.preco);
}

int main ()
{
    infos1 produto1;
    infos2 produto2;

    arquivar (&produto1);           //// chamando as funcoes
    passar (produto1, &produto2);
    imprimir (produto2);

    return 0;
}