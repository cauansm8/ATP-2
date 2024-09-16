#include <stdio.h>
#include <stdlib.h>

int main (){
//// Escreva um programa em C que verifique se uma matriz 3x3  e uma matriz de permutacao.

// E formada apenas de zeros e uns, sendo
// o valor de apenas um elemento por linha e por coluna que igual a um.

    //ex: 0 0 1
    //    1 0 0
    //    0 1 0


    int m[3][3];

    printf ("Informe 9 numeros: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    printf ("\n\n\n");

      for (int i=0; i < 3; i++)
      {
        for (int j=0; j < 3; j++)
        {
            if (m[i][j]!= 1 && m[i][j]!= 0)     //// verificando se os valores sao 0 ou 1
            {
                printf ("\n\nA matriz so deve conter zeros e uns!!\n\n");
                return 1;
            }
        }
    }



    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf ("%d ",m[i][j]);
        }
        printf ("\n");
    }





    for (int i=0; i < 3; i++)
    {

        for (int j=0; j < 3; j++)
        {


                if (m[i][j]==m[0][2] && m[0][2]==1){ //// o codigo ficou HORRIVEL mas funcionou :)

                    for (int k=0; k<2; k++)
                    {
                        if (m[i][j]== m[0][k] || m[i][j] == m[2-k][2]){ //// essa parte serve SOMENTE quando m[0][2] = 1

                        printf ("\n\nA matriz NAO e matriz de permutacao!!\n\n"); //// infelizmente essa situacao dava problema

                        return 1;       //// e eu nao consegui resolver de uma maneira mais eficiente
                            }
                        }
                    }

            //// OBSERVACAO IMPORTANTE
            //// TIVE QUE COLOCAR ESSES m[0][2] POIS O PROGRAMA SEMPRE DAVA "NAO PERMUTACAO"
            //// QUANDO m[0][2] = 1


                if (m[0][2]!= m[i][j] && m[i][j]==1)
                {

                            for (int k = j+1; k<3; k++)
                            {
                                if (m[i][j]==m[i][k] || m[i][j] == m[k][j])
                                {                                               ////// comparacao com os termos na mesma linha e coluna
                                printf ("\n\nA matriz NAO e matriz de permutacao!!\n\n");
                                return 1;
                                }
                        }
                   i++;
                  }
                 //// coloquei esse i++ para pular para o termo da msm coluna (so q na proxima linha)

                //// motivo: ja q passou pela verif significa q todos os termos da linha e col do termo

                //// sao zeros!! (nao coloquei o j++ pois isso ja esta no FOR

                //// o melhor exemplo ta no caderno

                }

        }


    printf ("\n\nA matriz e matriz de permutacao!!\n\n");


return 0;
}
