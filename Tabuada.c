#include <stdio.h>

int main ()
{
    int n, i, t;

    printf("Enter a number:");
    scanf("%d", &n);

    printf("Enter the maximum number for the times table:");
    scanf("%d", &t);

    printf ("Times table");
    printf("------------\n");
    for(i=1;i<=t;i++)
    {
        printf("%d*%d = %d\n",n, i, n*i);
    }
    printf("------------");

    return 0;
}