#include <stdio.h>

int main(void)
{
    int N, i, j;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    i = 0;
    if (N > 1 && N < 10)
    {
        printf("Result: \n");
        while (i < N)
        {
            j = 0;
            while (j < N)
            {
                if (j < (N - i) - 1)
                {
                    write(1, " ", 1);
                }
                else
                {
                    write(1, "*", 1);
                }
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
}