#include<stdio.h>
#define N 10

int main()
{
    int a[N], i, j, k = 0, prime[N], t = 0;

    for (i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);
    }
        
    for (i = 0; i < N; i++)
    {
        k = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            prime[t] = a[i];
            t++;
        }
    }
    
    for (i = 0; i < t; i++)
    {
        printf("%d ", prime[i]);
    }
    return 0;
}
