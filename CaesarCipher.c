#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CaesarCipher (char s[50]);

int main ()
{
    char s[50];
    

    printf("Write the sentence to convert using the Caesar cipher: ");
    fgets(s,sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    CaesarCipher(s);
    printf("%s", s);


    printf ("\n\n");
    return 0;
}

void CaesarCipher (char s[50])
{
    char aux[50];
    int shift;

    printf("Enter the cesar shitf value: ");
    fgets(aux, sizeof(aux), stdin);

    shift = atoi(aux);

    for(int i = 0; i < sizeof(s); i++)
    {
        s[i] = s[i] + shift;
    }
}