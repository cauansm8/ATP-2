#include <stdio.h>

int torre (int d)       /// quantos movimentos de pecas ocorre
{
    if (d == 2)                     //// caso base (se ha duas pecas, o movimento e 3)
    {
        return 3;
    }

    if (d>2){
        return torre(d-1) * 2 + 1;  //// caso recursivo ( t(n) = t(n-1) * 2 + 1 )
    }                               //// ele vai diminuindo a quantidade de discos ate chegar a 2 (caso base)
}

void calcular_hanoi(int disco, int orig, int dest, int aux){  /// funcao de como funciona a Torre de Hanoi

    if(disco == 1){         /////   caso base

        printf("\nO disco 1 vai para a posicao: %d\n", dest);  //// manda para a posicao destino a ultima peca e puxa a funcao novamente
        return 0;                                               /// encerra o programa
    }

    calcular_hanoi(disco - 1, orig, aux, dest);     /// essa funcao serve para mandar todos as pecas (com excessao da ultima) para o auxiliar
                                                    /// serve para deixar a ultima peca no destino!!!!!!


    printf("\nO disco %d vai para na posicao: %d\n", disco, dest); //// printa o movimento feito


    calcular_hanoi(disco - 1, aux, dest, orig);    /// como a funcao de cima ja jogou a ultima peca para o destino
                                                    /// essa funcao aqui serve para jogar a "nova" ultima peca para o destino
}


int main ()
{
        //// Implemente uma funcao recursiva para resolver o problema da Torre de       - > FEITO COM A AJUDA DO MONITOR GABRIEL HENRIQUE!!!!!!!!!!!
        //// Hanoi.

/* discos  -   movimentos
   2		        3
   3		        7
   4		        15
   5		        31
   6		        63
   7    		    127     */

    //// padrao: t(3) = t(2) * 2 + 1
    //// ou seja t(n) = t(n-1) * 2 + 1


        int d;
        printf ("\n\nInforme a quantidade de discos: ");            //// arquiva a quantidade de discos
        scanf ("%d",&d);

        printf ("\nA quantidade de movimentos: %d\n\n\n\n",torre(d));   ///// mostra a quantidade de movimentos


        calcular_hanoi(d, 1, 3, 2);         //// puxa a funcao


    return 0;
}
