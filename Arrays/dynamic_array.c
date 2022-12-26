#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int N, i, min, j;
	int **arr;
	int *size;
	
	scanf("%d", &N);

	if (N > 1 && N < 100) 
	{
		arr = (int**)malloc(sizeof(int*)*N);

		size = (int*)malloc(sizeof(int)*N);

		i = 0;
		while (i < N)
		{
			scanf("%d", &size[i]);

			if (size[i] > 1 && size[i] < 100) 
			{
				arr[i] = (int*)malloc(sizeof(int)*size[i]);
				j = 0;
				while (j < size[i])
				{
					scanf("%d", &arr[i][j]);
					j++;
				}
				i++;
			}
			else 
			{
				printf("Restart the program, enter a number in the desired range!");
				exit(EXIT_SUCCESS);
			}
		}

		i = 0;
		while (i < N)
		{
			j = 0;
			min = arr[i][j];
			while (j < size[i])
			{
				if (arr[i][j] < min)
				{
					min = arr[i][j];
				}
				j++;
			}
			i++;

			if (i < size[i])
			{
				printf("%d ", min);
			}
			else
			{
				printf("%d", min);
			}
		}

		free(size);
		i = 0;
		while (i < N)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	else 
	{
		printf("Restart the program, enter a number in the desired range!");
		exit(EXIT_SUCCESS);
	}

	return 0;
}