#include <stdio.h>

int main(void)
{
	int N, x;
	printf("Enter a positive integer: ");
	scanf("%d", &N);
	x = N % 10;
	N = N / 10;
	if (N > 1 && N < 1000000)
	{
		while (N)
		{
			if (N % 10 > x)
			{
				x = N % 10;
			}
			N /= 10;
		}
		printf("The maximum digit of the number: %d", x);
	}
	return 0;
}