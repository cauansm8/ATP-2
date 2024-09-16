#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 2

int det (int m[]){
    int direita, esquerda;

    direita = m[0] * m[3];
    esquerda = m[1] * m[2];


    return direita - esquerda;
}


int main ()
{
//// Escreva um programa em C que verifique se uma matriz 2x2 e uma matriz de reflexao.
/// precisa ser
/// - ortogonal (M * M^t = I = M^T * M)
/// - determinante = -1

        //// ex: 1  0
         ////    0 -1



    int m[lin][col], mt[col][lin], m_mult[lin][col], mvetor[lin*col], mi[lin][col]={1,0,0,1};

    printf ("\n\n Para a matriz ser de reflexao ela precisa ser \n- ortogonal (M * M^t = I = M^T * M)\n- determinante = -1\n\nInforme 4 numeros: \n");




    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }
    printf ("\n\nA matriz: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]); //// imprimindo
        }
        printf ("\n");
        }

    for (int i=0; i < col; i++)
        {
        for (int j=0; j < lin; j++)
        {
            mt[i][j] = m [j][i];        //// criando a transposta
        }
    }

    printf ("\n\nA matriz transposta: \n\n");

    for (int i=0; i < col; i++)
        {
        for (int j=0; j < lin; j++)
        {
            printf ("%d ",mt[i][j]);        //// imprimindo
        }
        printf ("\n");
        }

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            mvetor[i*col + j] = m[i][j];       //// passando para vetor
        }
    }


    int soma = 0;

    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            for (int k=0; k < lin; k++)
            {
            soma += m[i][k] * mt[k][j];     //// matriz de multiplicacao
            }
        m_mult[i][j] = soma;
        soma =0;
        }
    }

    printf ("\n\nA multiplicacao da matriz A pela sua transposta: \n\n");

    for (int i=0; i < col; i++)
        {
        for (int j=0; j < lin; j++)
        {
            printf ("%d ",m_mult[i][j]);    //// imprimindo
        }
        printf ("\n");
        }


        printf ("\n\nA matriz identidade: \n\n");

    for (int i=0; i < col; i++)
        {
        for (int j=0; j < lin; j++)
        {
            printf ("%d ",mi[i][j]);            //// imprimindo
        }
        printf ("\n");
        }



    int determinante = det (mvetor);        //// chamando a funcao para calcular a determinante

    printf ("\nDeterminante: %d\n",det(mvetor));

    if (determinante != -1)
    {
        printf ("\nA matriz nao e de reflexao, pois sua det e diferente de -1\n");  //// condicao 1 -> det = -1
        return 1;
    }


    for (int i=0; i < lin; i++)
        {
        for (int j=0; j < col; j++)
        {
            if (m_mult[i][j] != mi[i][j])       //// condicao 2 -> m * mT = I
            {
                printf ("\nA matriz nao e de reflexao, pois a multiplicacao de M por M^t e diferente da matriz identidade");
                return 1;
            }
        }
    }
        printf ("\nA matriz EH de reflexao, pois sua det = -1 E m*m^t = identidade\n\n");


return 0;
}
