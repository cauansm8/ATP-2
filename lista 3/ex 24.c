/* Resolva um problema de cadastro de funcionarios utilizando estruturas. */

#include <stdio.h>

#define qnt 2 //// quantidade

typedef struct {    ///// estrutura
    
    char nome[100];
    int codigo;
    char setor[100];
} infos;

void arquivar (infos * func, int i) //// funcao para arquivar informacoes na struct com ponteiro
{
    printf ("Informe o nome, o codigo e o setor do funcioanario %d: \n", i+1);
    gets (func->nome);
    scanf ("%d",&func->codigo);
    getchar ();
    gets (func->setor);    
}

void imprimir (infos func, int i)       //// funcao para imprimir informacoes de cada struct
{
    printf ("\n\nAs informacoes do funcionario %d: \n", i+1);
    printf ("Nome: %s\nCodigo: %d\nSetor: %s\n\n\n", func.nome, func.codigo, func.setor);
}

int main ()
{

    infos func [qnt];

    for (int i = 0; i < qnt; i++)   //// loop para arquivar
    {
        arquivar (&func[i], i);
    }

    for (int i = 0; i < qnt; i++)   //// loop para imprimir
    {
        imprimir (func[i], i);
    }


    return 0;
}