#include <stdio.h>
int soma (int N){
    if (N==1){
        return 1;
    }
    else {
        return N + soma(N-1);
    }
}



int main ()
{
    //// Implemente uma funcao recursiva para calcular a soma dos primeiros N numeros naturais
    int n;
    scanf ("%d",&n);
    printf ("\n%d\n",soma(n)); //// LEMBRANDO QUE ELE CONSIDERA O '0' COMO PRIMEIRO NUMERO
                               //// LOGO se sao os 6 primeiros numeros
                               //// 0 + 1 + 2 + 3 + 4 + 5 = 15 <- assim que funciona o programa


    return 0;
}
