/* Declare e inicialize uma uniao para armazenar um valor double ou um valor
char e imprima seus valores. */

#include <stdio.h>

typedef union {         /// estrutura de union com string(char) e numero (double)
    char string[100];
    double numero;
} uniao;


int main ()
{

    uniao armazenar;        //// estrutura de union na variavel 'armazenar'
    int escolha;

    while (escolha != -1){     //// loop ate sair do programa
        printf ("Informe se deseja armazenar string(0) ou numero double (1), ou saia (-1): "); //// a escolha define se o espaco para armazenamento sera para inteiro ou flutuante
        scanf ("%d",&escolha);

    switch (escolha)                /// switch para armazenar o numero com base no tipo
    {
        case 0:
        getchar ();
        printf ("Informe a string que deseja armazenar: \n");
        scanf ("%s",armazenar.string);
        break;
        
        case 1:
        printf ("Informe o numero double: \n");
        scanf ("%lf", &armazenar.numero);
        break;

        case -1:                    /// -1 sai do programa
        printf ("FIM DO PROGRAMA \n");
        return 0;
        break;

        default:                        //// se escolha < -1 ou escolha > 1 -> erro no programa
        printf ("NUMERO INCORRETO\n");
        return 1;
        break;
    }

    

    switch (escolha){                   //// switch para printar com base no tipo
        case 1:
        printf ("O numero double: %lf\n",armazenar.numero);
        break;

        case 0:
        printf ("A string: %s\n",armazenar.string);
        break;
    }
}






    return 0;
}