#include <stdio.h>
float potencia (int num, int elevado){  //// usei a funcao como float pois ela pode ter expoente negativo (ou seja, divisao)
    if (elevado == 0){                  //// se base esta elevada a zero = 1
        return 1;
    }

    if (elevado > 0){                           //// se base = 3 e pot = 3 --> 3 * potencia(3, 2)
        return num * potencia(num, elevado-1);
                                                //// puxamos a funcao ate o 'elevado' chegar a zero (que e o if de cima!)
    }

    if (elevado<0){                             //// para valores com expoente negativos
        return 1 / potencia (num, elevado*-1);  //// dividimos 1 pela base, dai puxamos a funcao novamente
                                                //// porem com o expoente positivo!!
    }

}

int main ()
{
//// Crie uma funcao recursiva para calcular a potencia de um numero.

    printf ("Informe um numero e sua potencia, respectivamente: \n");

    int base, pot;
    scanf ("%d",&base);     //// pegando os valores para base e potencia
    scanf ("%d",&pot);



    printf ("\n\nO resultado da potencia: %.3f", potencia(base, pot));

    return 0;
}
