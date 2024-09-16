#include <stdio.h>

int b_bin (int vet[], int procurado, int inicio, int fim, int *verif)
{

    if (vet[inicio] * vet[inicio] == procurado){  //// se o valor no array^2 = valor procurado
        return vet[inicio];                       //// o nm esta no array
    }

    if (inicio == fim && (vet[inicio] * vet[inicio]) != procurado)  //// se ate o ultimo termo for diferente do procurado
    {                                                               //// a variavel de verif retorna 0
        *verif = 0;                                                 //// precisa usar ponteiro para alterar o valor da variavel fora da funcao
        return *verif;
    }

    else {
        return b_bin (vet, procurado, inicio+1, fim, verif); //// se ainda nao chegou no fim do array
    }                                                        //// retorna a funcao pulando uma casa no vetor


}

#define tam 10

int main ()
{
//// Desenvolva uma funcao recursiva para encontrar a raiz quadrada de um
//// numero inteiro utilizando o metodo de busca binaria.

    int array[tam];

    printf ("\nInforme %d numeros de maneira ordenada: \n\n",tam);

    for (int i=0; i < tam; i++){
        scanf ("%d",&array[i]);
    }

    int procurado;
    printf ("\nInforme um numero que deseja procurar sua raiz dentro do array: ");
    scanf ("%d",&procurado);


    int verif = 1;      //// a variavel verif serve para quando terminar a busca e o valor da raiz nao for encontrado

    if (array[tam/2] * array[tam/2] < procurado)                    //// caso 1: se o valor procurado e menor q o termo do meio -> o meio se torna o fim do array
    {
        int busca = b_bin (array, procurado, tam/2, tam, &verif);

        if (verif == 0){
            printf ("\n\nO numero nao tem raiz no array\n\n");
            return 0;
        }
        else {
            printf ("\nO termo %d eh a raiz do numero %d\n\n", busca, procurado);
        }


    }


    if (array[tam/2] * array[tam/2] > procurado)                    //// caso 2: se o valor procurado e maior q o termo do meio -> o meio se torna o inicio do array
    {
    {
        int busca = b_bin (array, procurado, 0, tam/2, &verif);

        if (verif == 0){
            printf ("\n\nO numero nao tem raiz no array\n\n");
            return 0;
        }

        else {
            printf ("\nO termo %d eh a raiz do numero %d\n\n", busca, procurado);
        }

    }

    if (array[tam/2] * array[tam/2] == procurado)
    {
        printf ("\nO termo %d eh a raiz do numero %d\n\n",array[tam/2], procurado);
    }





    return 0;
}
}
