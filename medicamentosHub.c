#include <stdio.h>  // Biblioteca padrao do c
#include <string.h> // Biblioteca para manipulacao de strings
#include <stdlib.h>

void menu(); // Prototipo da funcao menu

struct medicamento // Definicao da struct que agrupa nome, dose e hora
{
    char nome[50];
    float dose, hora;
};

int main()
{
    struct medicamento med[50]; // vetor para armazenar ate 50 medicamentos
    char auxop[50];
    int op;    // as opcoes
    int i = 0; // contador de remedios cadastrados

    do
    {
        menu(); // Exibe a tela de menu

        printf("Escolha uma opcao:");
        fgets(auxop, sizeof(auxop), stdin);
        int op = atoi(auxop);
        switch (op)
        {
        case 1:

            printf("Digite o nome do medicamento:");

            fgets(med[i].nome, sizeof(med[i].nome), stdin);
            med[i].nome[strcspn(med[i].nome, "\n")] = '\0'; // remove o \n no final da da string

            printf("Digite a dose do medicamento:");
            scanf("%f", &med[i].dose);
            getchar(); // Limpa o '\n' do buffer do scanf para nao dar problema com o fgets

            printf("Digite a hora do medicamento:");
            scanf("%f", &med[i].hora);
            getchar(); // Limpa o '\n' do buffer do scanf para nao dar problema com o fgets

            i++;
            break;

        case 2:
            // Lista todos os remedios que foram cadastrados
            printf("---LISTA DE MEDICAMENTOS---\n");

            for (int j = 0; j < i; j++)
            {
                printf("NOME DO MEDICAMENTO: %s\n", med[j].nome);
                printf("DOSE DO MEDICAMENTO: %.2fmg\n", med[j].dose);
                printf("HORA DO MEDICAMENTO: %.2fh\n\n", med[j].hora);
            }

            break;

        case 3:

            printf("SAINDO...\n"); // Termina o programa
            break;

        default:

            printf("opcao invalida");
            break;
        }

    } while (op != 3); // Repete enquanto o usuario nao escolher a opcao de sair

    return 0;
}

// funcao responsavel por exibir o menu principal
void menu()
{
    printf("-----------MENU-----------\n");
    printf("CADASTRAR NOVO REMEDIO  [1]\n");
    printf("LISTAR TODOS OS REMEDIOS[2]\n");
    printf("SAIR                    [3]\n");
    printf("--------------------------\n");
}