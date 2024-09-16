#include <stdio.h>

void print_primos (int qnt, int contador)
{
    if (qnt == 0){
        printf ("\nNao ha quantidade de primos para ser impressos\n"); //// caso base
        return 0;
    }

    if (contador == 1){                          ///// se contador = 1 E sabendo q 1 nao e numero primo
        return print_primos (qnt+1, contador+1); //// pula para o proximo numero (contador+1) e continuando com a mesma diferenca (qnt+1)
    }

            if (contador < qnt){


                        if          ((contador % 2 !=0  && contador % 3 !=0 && contador % 5 != 0 && contador % 7 != 0) ||
                                    (contador == 2 || contador == 3 || contador == 5 || contador == 7)){

                                    printf ("\n%d\n",contador);
                                    return print_primos (qnt, contador+1);

                                    }

                        else {
                                    return print_primos (qnt+1, contador+1); //// aumenta um em quantidade POIS, se o numero nn e primo, o contador soma 1 (pula para o prox numero
                                    }                                        //// entretanto, ele precisa mostrar n numeros primos, logo para satisfazer a diferenca
            }                                                                //// soma +1 em qnt


            else { /////// quando acabar o loop de funcao -> encerra o programa!

                                    return 0;

            }
}



int main ()
{
//// Desenvolva uma funcao recursiva para imprimir todos os numeros primos
//// ate N.
    int n;
    printf ("Informe quantos numeros primos devem ser mostrados: ");
    scanf ("%d",&n);

    int i=0;
    print_primos (n, i);


return 0;
}
