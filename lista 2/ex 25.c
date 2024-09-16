#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 5


int main ()
{
//// Escreva um programa em C que implemente o jogo da vida (Game of Life) de Conway em uma matriz 5x5.
    int game[lin][col]={0,0,0,0,0,
                        0,0,1,0,0,
                        0,0,1,0,0,
                        0,0,1,1,0,
                        0,0,0,0,0}, mov, m_atua[lin][col]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                               //

    printf ("\nO jogo base: \n");

    for (int i=0; i<lin; i++)           //// imprimindo o jogo base
        {
            for (int j=0; j<col; j++)
            {
                printf ("%d ",game[i][j]);
            }
                printf ("\n");
    }

    printf ("\n\nInforme quantos movimentos tera no jogo: "); ///// arquivando a quantidade de movimentos do jogo

    scanf ("%d",&mov);

    for (int m; m < mov; m++){ //// loop para a quantidade de movimentos do jogo

        for (int i = 0; i < lin; i++){

            for (int j = 0; j < col; j++){



            int cont = 0;           /// variaveis para de comparacao em relacao ao game[i][j]


                for (int i2 = i - 1 ; i2 < i + 2; i2++){ //// a linha de comparacao eh a linha do game[i][j] - 1 (linha de cima)



                    for (int j2 = j - 1; j2 < j + 2; j2++){  //// a coluna de comparacao eh a coluna do game[i][j] - 1 (coluna anterior)



                            if (i2 >= 0 && i2 < lin && j2 >=0 && j2 < col) /// condicoes para os valores de comparacao estarem dentro da matriz


                            {
                                if (i2 == i && j2 == j){    //// para nao acontecer do numero[i][j] ser 1 e EVITAR de contar mais 1 (por causa do 1)
                                    j2++;
                                                            //// pulamos para o numero do lado
                                }



                                if (game[i2][j2] == 1)      //// se o valor ao lado eh 1, logo contamos 1++ ao contador de vizinhos
                                {
                                cont++;
                                }

                            }
                        }
                }

            /// regras do jogo!!!! PASSANDO OS VALORES PARA A MATRIZ TEMPORARIA

            if (game[i][j] == 1)    //// se a posicao esta povoada
            {
                if (cont == 1 || cont == 0)
                {                           //// e ha 1 ou 0 vizinhos -> o espaco "morre"
                    m_atua[i][j] = 0;
                }

                if (cont >= 4)
                {                           //// e ha 4 ou mais vizinhos -> o espaco "morre"
                    m_atua[i][j] = 0;
                }

                if (cont == 2 || cont == 3)
                {                               //// e ha 2 ou 3 vizinhos -> o espaco "sobrevive"
                    m_atua[i][j] = 1;
                }

            }



            if (game[i][j] == 0)            //// se a posicao nao esta povoada
            {
                if (cont == 3)
                {
                    m_atua[i][j] = 1;   //// e ha 3 vizinhos -> o espaco "nasce"
                }

                else
                {
                    m_atua[i][j] = 0; //// se nao, o espaco continua "morto"
                }
            }
        }
    }

        for (int i = 0; i < lin; i++)        //// retornando os valores para a matriz original
            {
                for (int j = 0; j < col; j++)
                {
                    game[i][j] = m_atua[i][j];
                }
            }

            printf ("\nJogo %d: \n",mov);

            for (int i = 0; i < lin; i++)   //// imprimindo a nova atualizacao do game
                {
                    for (int j = 0; j < col; j++)
                    {
                        printf ("%d ",game[i][j]);
                    }
                    printf ("\n");
            }
    }

return 0;
}
