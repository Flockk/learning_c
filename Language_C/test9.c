#include <stdio.h>

int main(void)
{
    int n, sum;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n > 1 && n < 100000)
    {
        for (sum = 0; n > 0; sum += n % 10, n /= 10);

        printf("The sum of the digits of the number: %d", sum);
    }
    return 0;
}