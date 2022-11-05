#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    int fact = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n > 1 && n < 12)
    {
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        printf("Factorial of the number %d: %d", n, fact);
    }
    return 0;
}