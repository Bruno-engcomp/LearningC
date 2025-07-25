#include <stdio.h>
#include <string.h>

void menu ();

struct cadastro
{
    char nome[50], email[50], funcao[50];
};

int main ()
{
   struct cadastro empresa[50];
   int op = 0;
   int i = 0;
    do 
    {
        menu ();
        printf("Escola uma opcao: ");
        scanf ("%d", &op);
        getchar ();
        
        switch (op)
        {
            case 1:
                printf("Digite o nome do empregado %d:", i + 1);
                fgets(empresa[i].nome, sizeof(empresa[i].nome), stdin);
            
                printf("Digite o email do empregado:");
                fgets(empresa[i].email,sizeof(empresa[i].email), stdin);
            
                printf("Digite a funcao do empregado:");
                fgets(empresa[i].funcao,sizeof(empresa[i].funcao), stdin);
                i++;
            break;
            
            case 2:
                for (int j = 0; j < i; j++)
                {
                    printf("FUNCIONARIO:%d\n", j + 1);
                    printf("Nome:       %s\n", empresa[j].nome);
                    printf("Email:      %s\n", empresa[j].email);
                    printf("Funcao:     %s\n\n", empresa[j].funcao);
                }
            
            break;
            
            case 3:
                printf("saindo...");
            
            
            break;
        }
    
    } 
    while (op != 3);
    
    return 0;
}

void menu ()
{
    printf("----------MENU----------\n");
    printf("ADICIONAR EMPREGADOS [1]\n");
    printf("LISTAR OS EMPREGADOS [2]\n");
    printf("SAIR                 [3]\n");
    printf("------------------------\n");
    
}