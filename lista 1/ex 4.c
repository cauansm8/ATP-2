#include <stdio.h>
int main (){
//Declare um array de 8 n ́umeros de ponto flutuante e inicialize-
//o com os valores dos primeiros 8 n ́umeros da sequˆencia de Fibonacci. Imprima
//todos os elementos do array.


float fib[8];

fib[0]=1.0;
fib[1]=1.0;

int i=2;

do{
 fib[i]= fib[i-1] + fib[i-2];
 i++;


}while (i<8);
int j=0;


    printf ("Os primeiros 8 numeros da sequencia de Fib: \n");
do{
    printf ("%.2f\n",fib[j]);
    j++;

}while (j<8);


return 0;
}
