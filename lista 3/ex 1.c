#include <stdio.h>


    typedef struct livro        ///// criando a estrutura
    {
        char titulo[20];
        char autor[20];
        int ano;
    } info;                     //// simplificando o nome como 'info'



    void coletar (info *obra)       //// funcao para coletar e armazenar as informacoes na estrutura
    {
        scanf ("%s",obra->titulo);          //// se usa '->' pois estamos armazenando fora da main (tem que usar ponteiro)
        scanf ("%s",obra->autor);
        scanf ("%d",&obra->ano);
    }

    void imprimir (info obra)       ///// funcao para imprimir
    {
        printf ("O titulo: %s\n", obra.titulo);
        printf ("O autor: %s\n", obra.autor);
        printf ("Ano de publicacao: %d\n", obra.ano);
    }


int main ()
{
    //// Declare e inicialize uma estrutura para armazenar as informacoes de um livro
    //// (titulo, autor, ano de publicacao) e imprima seus valores.



        info obra;          //// estrutura para a variavel obra
    printf ("Informe o titulo da obra, nome do autor e o ano de publicacao, respectivamente: \n");

    coletar (&obra);        //// chamando as funcoes (usa-se '&' pois estaremos colocando por fora da main as strings e o ano)
    imprimir (obra);



}