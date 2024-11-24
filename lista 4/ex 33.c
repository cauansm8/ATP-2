/* Escreva um programa em C para criar um arquivo binario contendo dados estruturados e implementar uma funcao de busca eficiente. */

#include <stdio.h>
#include <string.h>

#define qnt 5

    typedef struct
    {
        
        int idade;
        char nome[20];
    } registro;


    void busca_bin (FILE *file, int idade, int ini, int fim)
    {
     if (ini < fim)
     {
        int meio = (ini + fim) / 2;

        registro Verificar;
        fseek (file, meio * sizeof(registro), SEEK_SET);
        fread (&Verificar, sizeof(registro), 1, file);

        if (Verificar.idade == idade)
        {
            printf ("O nome da pessoa: %s\n\n",Verificar.nome);
        }

        else if(Verificar.idade < idade)
        {
            return busca_bin (file, idade, meio, fim);
        }
        else if (Verificar.idade > idade)
        {
            return busca_bin (file, idade, ini, meio);
        }

     }

     else 
     {
        printf ("Nao foi encontrado alguem com esta idade!!\n\n");
     }

    }

int main ()
{
    FILE *file;
    file = fopen ("ex34_busca_eficiente.bin", "w+b");

    if (file == NULL)
    {
        printf ("Nao foi encontrado o arquivo!!\n\n");
        return -1;
    }

    registro Regs[qnt];

    for (int i = 0; i < qnt; i++)
    {
        printf ("Informe idade e nome da pessoa: \n");
        scanf ("%d", &Regs[i].idade);
        scanf ("%s", Regs[i].nome);

        fwrite (&Regs[i], sizeof(registro), 1, file);
    }

    
   

    for (int i = 0; i < qnt; i++)
    { 
        
        for (int j = i + 1; j < qnt; j++)
        {
        registro Coletar1;
        registro Coletar2;
        
        fseek (file, i * sizeof(registro), SEEK_SET);
        fread (&Coletar1, sizeof(registro), 1, file);
        
        
        fseek (file, j * sizeof(registro), SEEK_SET);
        fread (&Coletar2, sizeof(registro), 1, file);

        if (Coletar1.idade > Coletar2.idade)
        {
        
        

        fseek (file, i * sizeof(registro), SEEK_SET);
        fwrite (&Coletar2, sizeof(registro), 1, file);

        fseek (file, j * sizeof(registro), SEEK_SET);
        fwrite (&Coletar1, sizeof(registro), 1, file);


        }


        }
    }

    registro teste[qnt];
    
    fclose (file);
    
    int idade;
    printf ("Informe a idade que deseja encontrar o nome: ");
    scanf ("%d", &idade);

    file = fopen ("ex34_busca_eficiente.bin", "r+b");

    busca_bin (file, idade, 0, qnt);

    fclose (file);

    return 0;
}

    
