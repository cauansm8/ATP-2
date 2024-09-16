#include <stdio.h>

int fat (int n){
    if (n<2){
        return 1;
    }
    else {
        return n*fat(n-1);
    }
}

int main ()
{
    //// Escreva uma funcao recursiva para calcular o fatorial de um numero.

    int nm;
    scanf ("%d",&nm);
    printf ("\n%d\n",fat (nm));


 return 0;
}
