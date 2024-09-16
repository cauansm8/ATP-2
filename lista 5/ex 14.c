#include <stdio.h>
#include <string.h>

int verif (char string[], int cont, int comp)
{

        if (cont < strlen(string))          //// loop de comparacao
        {
                    if (string[cont] != string[strlen(string) - 1 - cont])
                    {
                    comp = 0;               //// se e diferente, o valor da comparacao e zero (termina a funcao)

                    return comp;

                    }


                    else
                    {                                    //// o contador soma 1 e puxa a funcao novamente

                    return verif (string, cont+1, comp); //// recursividade

                    }
        }

        else
        {      //// se o loop terminar (quando cont = tamanho da string), significa q e para retornar o valor
               //// o valor mostrado aqui sempre e um, pois se fosse diferente, a funcao teria terminado anteriormente
        return comp;

        }

}

int main ()
{
///// Implemente uma funcao recursiva para verificar se uma palavra e um
///// palindromo.
    char string[20];

    printf ("\nInforme uma palavra (sem espaco): \n");

    gets (string);


    int i = 0, comp  = 1;               //// ja assumimos como verdade, pois assim fica mais facil caso a string nao seja palindromo

    if (verif (string, i, comp) == 1)
    {                                   //// se todas as comparacoes deram 1 -> palindromo
                    printf ("\nPALINDROMO\n\n");
    }

    else
    {
                    printf ("\nNAO E PALINDROMO\n\n"); //// se ao menos alguma valor for 0 -> nao e palindromo
    }

    return 0;
}
