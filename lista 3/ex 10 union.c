// resumo de union
            /* struct separa cada memoria para cada variavel - cada variavel tem a propria memoria */
            /* union pega a variavel com maior memoria e torna aquilo para todo o struct -> "fica tudo junto" */

                /* EXEMPLO:
                    struct {
                        int d -> 4 bytes
                        double x -> 8 bytes
                    }
                    sizeof (struct) = 12 bytes
                
                    union {
                        int d -> 4 bytes
                        double x -> 8 bytes
                    }
                    sizeof (union) = 8 bytes

                    union economiza espaco e torna flexivel 
                            se precisamos usar uma variavel somente texto e outra somente numero -> o union separa corretamente
                            se alocar algo, é perdido o que havia sido armazenado
                */

/* Declare e inicialize uma uniao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores. */

#include <stdio.h>

    typedef union{      //// estrutura do union
        int in;
        float fl;
    } uniao;

int main ()
{
    uniao numero;
    int escolha;

    while (escolha != -1){     //// loop ate sair do programa
        printf ("Informe se o numero eh inteiro (0) ou flutuante (1), ou saia (-1): "); //// a escolha define se o espaco para armazenamento sera para inteiro ou flutuante
        scanf ("%d",&escolha);

    switch (escolha)                /// switch para armazenar o numero com base no tipo
    {
        case 0:
        printf ("Informe o numero inteiro: \n");
        scanf ("%d",&numero.in);
        break;
        
        case 1:
        printf ("Informe o numero flutuante: \n");
        scanf ("%f",&numero.fl);
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
        case 0:
        printf ("O numero: %d\n",numero.in);
        break;

        case 1:
        printf ("O numero: %f\n",numero.fl);
        break;
    }
}
    


    return 0;
}