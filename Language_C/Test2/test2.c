#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter two fractional numbers: ");
    scanf("%f %f", &a, &b);
    c = a / b;
    printf("Division result: %.3f", c);

    return 0;
}