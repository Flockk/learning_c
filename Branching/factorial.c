#include <stdio.h>

int main(void) 
{
    int n;
    int i;
    int factorial;
    scanf("%d", &n);
    i = 1;
    factorial = 1;
    if (n > 1 && n < 12)
    {
            while (i <= n)
            {
                factorial = factorial * i;
                i++;
            }
            
            printf("%d", factorial);
    }
    return 0;
}