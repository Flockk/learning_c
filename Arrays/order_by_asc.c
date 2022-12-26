#include <stdio.h>
#define N 10

int main() 
{
	int mas[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &mas[i]);
	}

	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < (N - 1); j++) 
		{
			if (mas[j] > mas[j + 1]) 
			{
				int temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) 
	{
		printf("%d ", mas[i]);
	}

	return 0;
}