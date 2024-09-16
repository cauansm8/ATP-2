#include <stdio.h>

int main ()
{
 //// Escreva um programa em C que verifique se duas matrizes 2x2 sao iguais.
int matriz1[2][2], matriz2[2][2], verif=1;

printf ("Informe os elementos da primeira matriz 2x2: \n"); //// criando matrizes
for(int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        scanf ("%d",&matriz1[i][j]);
    }
}
printf ("\nInforme os elementos da segunda matriz 2x2: \n");  //// criando matrizes

for(int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        scanf ("%d",&matriz2[i][j]);
    }
}

for (int i=0; i<2 && verif!=0; i++){
    for (int j=0; j<2 && verif!=0; j++){ //// verificando as matrizes
        if (matriz1[i][j]!=matriz2[i][j]){ //// se ao menos UM elemento for diferente -> os dois 'for' se finalizam
            verif=0;
        }
    }
}
    if (verif==1){
        printf ("\nMatrizes iguais\n");
    }
    if (verif==0){
        printf ("\nMatrizes diferentes\n");
    }

return 0;

}
