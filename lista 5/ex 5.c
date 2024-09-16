#include <stdio.h>
int verif (int nm, int cont, int div){

    if (cont<=nm){
            if (nm % cont==0){             //// se o resto da divisao e zero -> significa q o numero tem mais um divisor
            div++;
            }
            cont++;                        //// o contador vai passando de numero em numero ate chegar em nm
            return verif (nm, cont, div);  //// AQUI ESTA A RECURSAO
    }                                      //// pois ela retorna a mesma funcao (so que com o contador+1)

    if (cont>nm);{                         //// quando o contador e um numero apos nm
        return div;                        //// significa q a funcao ja teve seu fim
    }                                      //// dai precisamos retornar quantas divisoes temos
}

int main ()
{
    //// Escreva uma funcao recursiva para verificar se um numero e primo.
    int n, contador=1, divisoes=0;
    scanf ("%d",&n);
                                            ////  numero so e divisivel por 1 e por ele mesmo
                                            //// os divisores mais presentes sao : 2, 3, 5
                                            //// o cont ja comeca em 1 pq ele sera o divisor (logo, se comecar em 0 o programa da erro!!)

    if (verif (n, contador, divisoes)==2){  //// se o numero e primo, ele vai ter apenas duas divisoes
        printf ("\nO numero e primo\n");    //// -> n/1 E n/n -> ou seja, apenas duas
        return 0;
    }
    if (verif (n, contador, divisoes)!=2){
        printf ("\nO numero NAO E primo\n");
        return 1;
    }



    return 0;
}
