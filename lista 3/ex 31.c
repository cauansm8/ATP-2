/* Crie uma funcao que recebe uma estrutura de funcionario (nome, salario, de-
partamento) como parametro e imprima seus valores. */

#include <stdio.h>
#define qnt 1       /// quantidade

typedef struct {        //// estrutura
    char nome[100];
    float salario;
    char departamento[100];

} infos;

    void arquivar (infos *funcionario, int i)       /// arquivar por funcao
    {
        printf ("Informe o nome, salario e departamento do funcionario %d: \n",i+1);
        gets (funcionario->nome);
        scanf ("%f",&funcionario->salario);
        getchar();
        gets (funcionario->departamento);
    }

    void imprimir (infos funcionario, int i)        /// imprimir por funcao
    {
        printf ("\nAs informacoes do funcionario %d: \n", i + 1);
        printf ("Nome: %s\nSalario: %.2f\nDepartamento: %s\n\n", funcionario.nome, funcionario.salario, funcionario.departamento);
    }


int main ()
{

    infos funcionario[qnt];

    for (int i = 0; i < qnt; i++)           /// loop de arquivar
    {
        arquivar (&funcionario[i], i);
    }

    for (int i = 0; i < qnt; i++)           //// loop de imprimir
    {
        imprimir (funcionario[i], i);
    }


    return 0;
}