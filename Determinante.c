#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][5];
    int i, j, n;
    int det, detM, detm;
    printf("Qual matriz deseja saber a determinante?\n");
    printf("----------------------------------------\n");
    printf("Matriz 2x2 [1]\n");
    printf("Matriz 3x3 [2]\n");
    printf("----------------------------------------\n");
    printf("Digite sua escolha:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Elemento [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
        det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }
        printf("O determinante dessa matriz e %d", det);
        break;
    }
    case 2:
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("Elemento [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
        j = 0;
        for (i = 0; i < 3; i++)
        {
            matriz[i][3] = matriz[i][0];
            matriz[i][4] = matriz[i][1];
        }
        detM = (((matriz[0][0]) * (matriz[1][1]) * (matriz[2][2])) + ((matriz[0][1]) * (matriz[1][2]) * (matriz[2][3])) + ((matriz[0][2]) * (matriz[1][3]) * (matriz[2][4])));
        detm = (((matriz[2][0]) * (matriz[1][1]) * (matriz[0][2])) + ((matriz[2][1]) * (matriz[1][2]) * (matriz[0][3])) + ((matriz[2][2]) * (matriz[1][3]) * (matriz[0][4])));
        det = detM - detm;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }
        printf("A determinante da matriz e %d", det);
    }
    break;
    default:
    {
        printf("Opcao invalida");
    }
    }
    return 0;
}