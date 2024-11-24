/* Declare e inicialize uma uniao para armazenar um valor char ou um valor inteiro
e imprima seus valores. */

#include <stdio.h>

    typedef union {         /// estrutura do union
        char string[100];
        int valor;
    } uniao;

int main ()
{
    int escolha;            /// variavel de escolha
    uniao armazenar;        /// variavel 'armazenar' recebe a estrutura do union

    while (escolha != -1){      /// loop ate sair do programa
    printf ("Informe se deseja armazenar um numero inteiro (0), ou uma string (1) ou sai do programa (-1): ");  /// escolha
    scanf ("%d",&escolha);

        switch (escolha)            //// switch para armazenar
        {
            case 0:
            printf ("Informe um numero inteiro: ");
            scanf ("%d",&armazenar.valor);
            break;

            case 1:
            printf ("Informe uma string: ");
            getchar ();
            gets (armazenar.string);
            break;

            case -1:
            printf ("FIM DO PROGRAMA\n\n");
            return 0;
            break;

            default:
            printf ("NUMERO INVALIDO\n\n");
            return 1;
            break;

        }

        switch (escolha){                //// switch para printar com base no tipo escolhido
        case 0:
        printf ("O numero inteiro armazenado: %d\n",armazenar.valor);
        break;

        case 1:
        printf ("A string armazenada: %s\n",armazenar.string);
        break;
    }

    }


    return 0;
}