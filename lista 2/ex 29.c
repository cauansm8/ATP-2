#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main ()
{
    //// Escreva um programa em C que roteie os elementos de uma matriz 3x3 em 90 graus no sentido anti-horario.

    int m[lin][col], m2[lin][col];



    printf ("\nInforme 9 numeros: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            scanf ("%d",&m[i][j]);      //// arquivando
        }
    }

    printf ("\n\nA matriz antes da rotacao: \n\n");

    for (int i=0; i < lin; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m[i][j]);    //// imprimindo
        }
        printf ("\n");
    }

  for (int i=0; i < lin; i++)
  {
    for (int j=0; j < col; j++)
    {
        m2[i][j] = m[j][2-i];               //// rotacionando
    }
  }

  printf ("\n\nA matriz depois da rotacao anti-horaria: \n\n");


  for (int i=0; i < lin; i++)
  {
        for (int j=0; j < col; j++)
        {
            printf ("%d ",m2[i][j]);        //// imprimindo
        }
        printf ("\n");
    }



    return 0;
}
