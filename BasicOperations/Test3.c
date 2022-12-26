#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("Minimum number: %d", a);
        }
        else
        {
            printf("Minimum number: %d", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("Minimum number: %d", b);
        }
        else
        {
            printf("Minimum number: %d", c);
        }
    }
    return 0;
}