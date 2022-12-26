#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a < c)
        {
            printf("Average number: %d", a);
        }
        else
        {
            printf("Average number: %d", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("Average number: %d", b);
        }
        else
        {
            printf("Average number: %d", c);
        }
    }
    return 0;
}