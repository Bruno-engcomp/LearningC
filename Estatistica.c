#include <stdio.h>
#include <math.h>


int moda (int x[], int n);
float mediana (int x[], int n);
float media (int x[], int n);
float mediag (int x[], int n);
int main ()
{
    int n;

    printf("Digite a quantia de numeros: ");
    scanf("%d", &n);

    int ns[n];

    printf("Digite os numeros:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ns[i]);
    }

    printf("Moda: %d\n", moda(ns, n));
    printf("Mediana: %.2f\n", mediana(ns, n));
    printf("Media: %.2f\n", media(ns, n));
    printf("Media geometrica: %.2f\n",  mediag(ns, n));

    return 0;
}

int moda (int x[], int n)
{
    int moda;
    int maxrep = 0;
    for (int i = 0; i < n; i++)
    {
        int contador = 0;
        for(int j = 0; j < n; j++)
        {
            if(x[i] == x[j]){
            contador++;
            }
        }
        if(contador > maxrep)
        {
            maxrep = contador;
            moda = x[i];
        }
    }
    return moda;
}

float mediana (int x[], int n)
{
    
    float n1, n2, mediana;
    int aux = 0;
    for(int i = 0; i < n - 1 ; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(x[j] > x[j + 1])
            {
                aux = x[j];
                x[j] = x[j+1];
                x[j+1] = aux;
            }
        }
    }
    if (n % 2 == 0)
    {
        n1 = x[(n/2 - 1)];
        n2 = x[n/2];
        mediana = (n1+n2)/2;
        
    }
    else
    {
        mediana = x[n/2];
    }

    return mediana; 
}

float media (int x[], int n)
{
    float media;
    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma = soma + x[i];
    }

    media = soma / (float)n;
    return media;
}

float mediag (int x[], int n)
{
    double mediag;
    double produto = 1;

    for(int i = 0; i < n; i++)
    {
        if (x[i] < 0)
        {
            printf("A media geometrica requer numeros positivos");
            return -1;
        }
        produto *= x[i]; // *= E um operador de atribuicao composto para evitar escrever produto = produto * x[i]
    }
    mediag = pow(produto, 1.0/n);
    
    return mediag;
}
