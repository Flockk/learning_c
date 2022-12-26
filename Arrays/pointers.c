#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n, i, min;
	int *mas;

	scanf("%d", &n);

	mas = (int*)malloc(sizeof(int) * n);

	i = 0;
	while (i < n) 
	{
		scanf("%d", &mas[i]);
		i++;
	}

	min = mas[0];
	i = 1;
	while (i < n) 
	{
		if (mas[i] < min) 
		{
			min = mas[i];
		}
		i++;
	}

	printf("%d", min);
	return 0;
}