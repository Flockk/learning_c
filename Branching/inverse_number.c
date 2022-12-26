#include <stdio.h>

int main(void)
{
	int N, x;
	scanf("%d", &N);
    x = 0;
	if (N > 1 && N < 1000000)
	{
	    if (N > 10)
	    {
	        while (N > 0)
	        {
	            x = x * 10 + N % 10;
	            N /= 10;
	        }
	        printf("%d",x);
	    }
	    else 
	    {
	        printf("%d", N);
	    }
	}
	return 0;
}