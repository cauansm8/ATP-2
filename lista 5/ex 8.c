#include <stdio.h>

int MDC(int x, int y)
{   int resto;
    resto = x % y;

    if (x % y != 0)
    {                     //// se o resto e diferente de zero, passamos o x = y (ou seja n1 fica igual a n2)
        x = y;            //// e o resto passa a ser o novo y
        y = resto;        //// dai vai se dividindo ate chegar num ponto que o resto da divisao resultara em zero
        return MDC (x, y);  // resto = 0 e a situacao abaixo!
    }

    if (x % y == 0)       //// se o resto e zero, significa que o y ja e o maior divisor de x
    {                     //// logo nao precisa usar recursao
        return y;
    }

}


int main ()
{
//// Desenvolva uma funcao recursiva para calcular o MDC (Maximo Divisor
//// Comum) de dois numeros.
    int n1, n2;
    printf ("\nInforme os dois numeros para calcular o MDC: \n");
    scanf ("%d",&n1);
    scanf ("%d",&n2);

    if (n1>n2){
        printf ("\nO MDC de %d e %d: %d\n\n",n1,n2,MDC(n1,n2));
        return 0;
    }
    if (n2>n1){
        int aux; //// essa parte e para inverter os valores

        aux = n1;
        n1 = n2;
        n2 = aux;

        printf ("\nO MDC de %d e %d: %d\n\n", n1 , n2 , MDC ( n1, n2 ));
        return 0;

    }





    return 0;
}
