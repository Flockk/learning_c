#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, i, min, j;
	int **mas;
	int *size;
	

	scanf("%d", &N);


	mas = (int**)malloc(sizeof(int*) *N);

	size = (int*)malloc(sizeof(int) * N);

	i = 0;
	while (i < N)
	{	
		scanf("%d", &size[i]);
		mas[i] = (int*)malloc(sizeof(int) * size[i]);
		j = 0;
		while (j < size[i]) 
		{
			scanf("%d", &mas[i][j]);
			j++;
		}
		i++;
	}

	i = 0;
	while (i < N)
	{
		j = 0;
		min = mas[i][j];
		while (j < size[i]) 
		{
			if (mas[i][j] < min)
			{
				min = mas[i][j];
			}
			j++;
		}
		i++;
		if (j < i)
		{
			printf("%d ", min);
		}
		else
		{
			printf("%d", min);
		}
	}
	return 0;
}