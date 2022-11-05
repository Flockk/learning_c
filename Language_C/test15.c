#include <stdio.h>

int main(void)
{
	int N;
	int x = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &N);
	if (N > 1 && N < 1000000)
	{
		if (N > 10)
		{
			while (N > 0)
			{
				x = x * 10 + N % 10;
				N /= 10;
			}
			printf("The number is in reverse order: %d", x);
		}
		else
		{
			printf("Entered number: %d", N);
		}
	}
	return 0;
}