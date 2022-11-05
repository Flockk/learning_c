#include <stdio.h>

int main(void)
{
    int N, i, j, count;
    count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if (N > 4 && N < 100000)
    {
        printf("All prime nubmers from 1 to %d: ", N);
        for (i = 2; i < N; i++)
        {
            for (j = 1; j < N; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }

            if (count < 3)
            {
                printf("%d", i);
                printf("%c", ' ');
            }
            count = 0;
        }
    }
    return 0;
}