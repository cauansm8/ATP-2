/* Declare e inicialize uma estrutura para armazenar as informacoes de um fun-
cionario (nome, salario, departamento) e imprima seus valores. */


#include <stdio.h>
#include <stdlib.h>

#define qnt 2 //// quantidade

typedef struct {            //// estrutura
    char nome[50];
    float salario;
    char departamento[30]
} funcionario;

void armazenar (funcionario * funcs, int i)                 //// armazenando com ponteiro
{
    printf ("Informe nome, salario e departamento do funcionario %d: \n", i+1);
    scanf ("%s",funcs->nome);
    scanf ("%f",&funcs->salario);
    getchar();
    scanf ("%s",funcs->departamento);
    getchar();

}

void imprimir (funcionario funcs, int i)                    //// imprimindo com .
{
    printf ("\nAs informacoes do funcionario %d: \n", i+1);
    printf ("Nome: %s\nSalario: %.2f\nDepartamento: %s\nFIM DAS INFORMACOES DO FUNCIONARIO %d\n",
            funcs.nome, funcs.salario, funcs.departamento, i+1);

}

int main ()
{
    funcionario funcs[qnt];             

    for (int i = 0; i < qnt; i++)               /// loop para cada funcionario (arquivar)
    {
        armazenar (&funcs[i], i);
    }

    for (int i = 0; i < qnt; i++)               //// loop para cada funcionario (imprimir)
    {
        imprimir (funcs[i], i);
    }



    return 0;

}