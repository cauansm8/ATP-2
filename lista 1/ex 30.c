#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inverter (char *st[], char *st2[], char aux[])
{
    if (strcmp(*st, *st2) > 0)
    {
        strcpy (aux, *st);      //// semelhante a ideia de organizar os numeros em ordem

        strcpy (*st, *st2);     //// passamos a string maior para a auxiliar

        strcpy (*st2, aux);     //// passamos para a string inicial a string2

                                //// e no lugar da string 2, nos mandamos a string inicial (que estava guardada na auxiliar)

    }


}



int main() {
        //// Escreva um programa em C que use um array de ponteiros
        //// para armazenar 3 strings, ordene as strings em ordem alfabetica e as imprima.

    char *pont[3];


    for (int i = 0; i < 3; i++)
    {

        pont[i] = malloc (20 * sizeof (char)); //// reservando espaco de 20 carac para cada uma das 3 strings

    }

    printf ("\nInforme 3 strings: \n");

    for (int i = 0; i < 3; i++)                 //// arquivando as strings
    {

        gets (pont[i]);

    }


    for (int i = 0; i < 3; i++)
    {
        printf ("\nString %d: %s\n",i+1, pont[i]);  //// imprimindo as strings
    }

    int i = 0;

    do                      //// loop de comparacao para a "string base" (i)
    {

        int j = i + 1;

            do {            //// loop de comparacao para a "string posterior"

            char aux[20];

            inverter (&pont[i], &pont[j], aux); //// usamos como ponteiro PQ a funcao vai inveter o array de strings da Main





              j++;


            } while (j < 3);




     i++;

    }while (i < 2);

    printf ("\nAs strings organizadas com base na ordem alfabetica: \n");

    for (int i = 0; i < 3; i++)

    {
        printf ("\nString: %s\n", pont[i]);                 //// imprimindo apos a organizacao
    }



    return 0;
}
