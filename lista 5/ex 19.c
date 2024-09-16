#include <stdio.h>

int bin (int n, int k)
{
    if (n == 0 && k > 0)    //// ex: | 0 |          -> 0! / (2! * 2!) = 0
    {                       ////     | 2 |
        return 0;
    }

    if (n >= 0 && k == 0)   //// ex:  | 2 |         -> 2! / 2!   =  1
    {                       ////      | 0 |
        return 1;
    }

    if (n > 0 && k > 0)
    {
        return bin (n-1, k) + bin (n-1, k-1);   //// esta e a funcao recursiva para o binomial
    }

}


int main ()
{
//// Crie uma funcao recursiva para calcular o coeficiente binomial C(n, k).
    int n, k;

    printf ("\nInforme os termos n e k respectivamente: \n");   ////        ->    n! / (n-k)! k!
    scanf ("%d",&n);
    scanf ("%d",&k);


    printf ("\nO resultado: %d\n\n",bin(n, k));

    return 0;
}
