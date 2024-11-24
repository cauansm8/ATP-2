/* Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma es-
trutura para armazenar as informacoes de um contato (nome, telefone, email) e
imprima seus valores. */

#include <stdio.h>
#define qnt 2

typedef struct {        //// estrutura
    char nome[100];
    int telefone;
    char email[100];
} infos;


    void arquivar (infos *contato, int i)       /// funcao para armazenar
    {
        printf ("Informe nome ,telefone e email do contato %d: \n", i + 1);
        gets (contato->nome);
        scanf ("%d",&contato->telefone);
        getchar();
        gets (contato->email);
    }

    void imprimir (infos contato, int i)            //// funcao para imprimir
    {
        printf ("\nAs informacoes do contato %d: \n", i+1);
        printf ("Nome: %s\nTelefone: %d\nEmail: %s\n\n", contato.nome, contato.telefone, contato.email);
    }



int main ()
{
    infos contato[qnt];

    for (int i = 0; i < qnt; i++)       /// loop para armazenar
    {
        arquivar (&contato[i], i);
    }

    for (int i = 0; i < qnt; i++)       /// loop para imprimir
    {
        imprimir (contato[i], i);
    }

    return 0;
}