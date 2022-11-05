#include <stdio.h>

int main(void)
{
    int N, i, j;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    i = 1;
    if (N > 1 && N < 10)
    {
        printf("Result: \n");   
        while (i <= N)
        {
            j = 1;
            while (j <= i)
            {
                write(1, "*", 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
}