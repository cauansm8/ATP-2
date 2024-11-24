/* Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura. */

#include <stdio.h>

typedef struct {            //// estrtura 1
    int cpf;
    int telefone;
} contato1;

typedef struct {            /// estrutura 2
    int cpf;
    int telefone;
} contato2;



void arquivar (contato1 * pessoa1)      //// arquivando por ponteiro
{
    printf ("Informe o cpf e o telefone: \n");
    scanf ("%d",&pessoa1->cpf);
    scanf ("%d",&pessoa1->telefone);
}

void passar (contato1 pessoa1, contato2 *pessoa2)       //// passando usando ponteiro
{   
    pessoa2->cpf = pessoa1.cpf;
    pessoa2->telefone = pessoa1.telefone;
}

void imprimir (contato2 pessoa2)            //// imprimindo
{

    printf ("\n\nAs informacoes passadas: \n");
    printf ("cpf: %d\nTelefone: %d\n\n",pessoa2.cpf, pessoa2.telefone);

}

int main ()
{
    contato1 pessoa1;
    contato2 pessoa2;

    arquivar (&pessoa1);        //// arquivar
    passar (pessoa1, &pessoa2); //// passar
    imprimir (pessoa2);         //// imprimir

    return 0;
}