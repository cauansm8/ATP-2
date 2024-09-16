#include <stdio.h>

int ackerman (int m, int n) //// estas formulas sao as proprias formulas de ackerman
{
    if (m == 0)             //// caso base
    {
        return n + 1;
    }

    if (m > 0 && n == 0)    //// caso 1
    {
        return ackerman (m - 1, 1);
    }

    if (m > 0 && n > 0)     //// caso 2
    {
        return ackerman (m - 1, ackerman(m, n - 1));
    }

}

int main ()
{
//// Desenvolva uma funcao recursiva para calcular a sequencia de Ackermann.
    int n, m;

    printf ("\nInforme m e n, respectivamente: \n");
    scanf ("%d",&m);
    scanf ("%d",&n);

    printf ("\n%d\n",ackerman (m, n));

    return 0;
}
