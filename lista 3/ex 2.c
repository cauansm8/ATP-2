#include <stdio.h>

    typedef struct dados        ///// criando a estrutura
    {
        char marca[20];
        char modelo[20];
        int ano;
    }   info;   //// toda a estrutura eh definida como 'info'

    void coletar_info (info *carro)         //// chamando a funcao para coletar informacoes
    {

        printf ("Informe a marca, o modelo e o ano do seu carro: \n");      ///// arquivando as informacoes
        scanf ("%s",carro->marca);              //// usa '->' pois eh um ponteiro
        scanf ("%s",carro->modelo);
        scanf ("%d",&carro->ano);

    }

    void imprimir (info carro)          ///// chamando a funcao para imprimir informacoes
    {
        printf ("Marca: %s \nModelo: %s \nAno: %d",carro.marca, carro.modelo, carro.ano);       //// imprimindo
    }


int main ()
{
    //// Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a definicao de uma es-
    //// trutura para armazenar as informacoes de um carro (marca, modelo, ano) e
    //// imprima seus valores.

    info carro;     //// a variavel carro tem toda aquela estrutura acima (em 'dados')

    coletar_info (&carro);      ///// chamando a funcao para arquivar (usa '&' pois esta fora da main)
    imprimir (carro);           ///// chamando a funcao para imprimir




    return 0;
}