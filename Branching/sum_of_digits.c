#include <stdio.h>

int main(void) 
{
    int n;
    int sum;
    scanf("%d", &n);
    if (n > 1 && n < 100000)
    {
        for (sum = 0; n > 0; sum += n % 10, n /= 10);
    
        printf("%d", sum);
    }
    return 0;
}