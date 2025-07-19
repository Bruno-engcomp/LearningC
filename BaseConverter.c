#include <stdio.h>

int binary (int b);

int main ()
{   
    int n;

    printf("Up to which number do you want the table to go?: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // loop to print the table 
    {
       printf ("Decimal: %d, HexaDecimal: %x, Octal: %o, binary: %d\n",i ,i ,i , binary(i));
    }
    
}

// Function that converts decimal to binary
int binary (int b)
{
    int i = 0;
    int bin[32];
    int binv = 0;
    
    while (b>0) // loop to storage the remainders in an array
    {
        bin[i] = b % 2;
        b = b / 2;
        i ++;
    }
    for (int j = i - 1; j >= 0; j--) // loop to convert the array into a single binary number
    {
        binv = binv * 10 + bin[j];
    }
    return binv;
}