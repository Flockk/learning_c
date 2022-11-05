#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    c = a % b;
    d = b % a;

    if (c < d)
    {
        printf("Minimum number: %d", c);
    }
    else
    {
        printf("Minimum number: %d", d);
    }
    return 0;
}