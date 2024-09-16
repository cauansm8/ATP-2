#include <stdio.h>
int fib (int n){
    if (n<2){   //// os valores de fib(1) e fib(0) sao '0'
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2); //// se nao e '1' ou '0' -> retorne a soma dos termos anteriores
    }
}


int main()
{

    //// Desenvolva uma funcao recursiva para calcular a sequencia de Fibonacci
    //// ate o enesimo termo.
    int n;
    scanf("%d",&n);
    printf ("\n%d\n", fib(n));


    return 0;
}
