#include <stdio.h>

int soma_digitos (nm)
{
    if(nm == 0)
    {
        return 0;
    }
        //// nm % 10 pega o ultimo digito
    return (nm % 10) + soma_digitos(nm / 10); //// nm / 10 pega os digitos restantes e puxa a funcao dnv
}

int main()
{
    int n;


    printf("Informe um numero: ");
    scanf("%d",&n);

    printf("\n\nA soma dos digitos do numero: %d", soma_digitos(n));


}
