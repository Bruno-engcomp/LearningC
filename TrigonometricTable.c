#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.1415926535897
#endif

int main ()
{
    float d;
    printf("Enter the number of degrees: ");
    scanf("%f", &d);

    float rad = d * ( M_PI / 180);

    printf("sine of %.2f degrees is %.2f\n", d , sin(rad));
    printf("cossine of %.2f degrees is %.2f\n",d , cos(rad));
    printf("tan of %.2f degrees is %.2f\n", d , tan(rad));

    return 0;
}