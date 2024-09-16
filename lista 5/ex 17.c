#include <stdio.h>

int caminho (int i, int n) //// i = linha //// n = coluna
{
//// os "caminhos" em uma matriz podem ser dois: para baixo ou para a direita


    if (i == 1 || n == 1) //// fim do caminho
    {
        return 1;
    }


    return caminho (i - 1, n) + caminho (i, n - 1);
        /////  caminhando a linha   //// caminhando por coluna
        // caminhar para "baixo"      // caminhar para a "direita"



        ///// a recursao pesa no programa e partir de algum valor de N, o programa nao roda!!!
}


int main ()
{
//// Escreva uma funcao recursiva para calcular o numero de caminhos possiveis
//// em uma grade NxN.

    printf ("\nInforme a proporcao da matriz: "); //// arquivando a proporcao da matriz
    int n;
    scanf ("%d",&n);


    int i = n;
    printf ("\nA quantidade de caminhos possiveis: %d\n\n",caminho(i, n));

    return 0;
}
