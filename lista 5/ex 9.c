#include <stdio.h>
#include <string.h>

char inverter(char string[], char string2[],int cont)
{
    int tam = strlen(string);

    if (cont< tam){

        string2[cont] = string[tam-cont-1];      //// o primeiro carac da string 2 e igual ao ultimo carac da string1
        cont++;                                  //// tem que colocar o -1 PQ, se nao o primeiro carac a ser enviado para a string2
                                                 //// seria o carac de finalizacao de string ('\0')

        return inverter (string, string2, cont); //// puxa a funcao dnv ate a condicao de contador < tamanho se encerrar
    }

    else {
        return string2;                          //// quando termina a condicao, retorna o valor da string
    }
}

int main ()
{
//// Escreva uma funcao recursiva para inverter uma string.

    char str[20],str2[20]; //// ex -> cauan -> nauac
    gets (str);
    int contador=0;

    inverter (str, str2, contador); //// passarei para a string2 o inverso da string1
    printf ("\n\nA string invertida: %s\n\n",str2);

    return 0;
}
