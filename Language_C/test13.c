#include <stdio.h>

int main(void)
{
    int N, i, j;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if (N > 1 && N < 100)
    {
        for (i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                printf("Divisors of the entered number: %d", i);
                for (j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        printf("%c", ' ');
                        printf("%d", j);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}