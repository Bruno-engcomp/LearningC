#include <stdio.h>
#include <math.h>

int main ()
{   
    int resp;
    char r;
    float n1, n2;
    do 
    {
        printf("----CALCULATOR----\n");
        printf("------------------\n");
        printf("ADDITION       [1]\n");
        printf("SUBTRACTION    [2]\n");
        printf("MULTIPLICATION [3]\n");
        printf("DIVISION       [4]\n");
        printf("POW            [5]\n");
        printf("SQUARE ROOT    [6]\n");
        printf("EXIT           [0]\n");
        printf("------------------\n");

        printf("Enter the option: ");
        scanf("%d", &resp);

    
        switch (resp)
        {
            case 1:
                printf("Enter two numbers: ");

                scanf("%f %f", &n1, &n2);
                printf("Result: %.2f\n", n1 + n2);
            break;

            case 2:
                printf("Enter two numbers: ");

                scanf("%f %f", &n1, &n2);
                printf("Result: %.2f\n", n1 - n2);
            break;

            case 3:
                printf("Enter two numbers: ");

                scanf("%f %f", &n1, &n2);
                printf("Result: %.2f\n", n1 * n2);
            break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &n1, &n2);
                if (n2 != 0)
                {
                    printf("Result: %.2f\n", n1 / n2);
                }
                else 
                    printf("Error: can't divide by zero!\n");
            break;

            case 5:
                printf("Enter two numbers: ");

                scanf("%f %f", &n1, &n2);
                printf("Result: %.2f\n", pow(n1,n2));
            break;

            case 6:
                printf("Enter a number: ");

                scanf("%f", &n1);
                if (n1 > 0)
                {
                    printf("Result: %.2f\n", sqrt(n1));
                }
                else
                {
                    printf("Error: negative number has no real square root.\n");
                }
            break;
            case 0:
                printf("Exiting the calculator...\n");
                return 0;

            default:
                printf("Select a valid option!\n");

            
        }
        printf("Do you want to continue? [Y/n]");
        scanf(" %c", &r);
    } while (r == 'Y' || r == 'y');

    return 0;
}