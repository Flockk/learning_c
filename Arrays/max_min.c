#include <stdio.h>

#define M 5
#define N 30

int main() 
{
	float mas[M][N];
	int i, j;
	float max, min, avg;

	i = 0;
	while (i < M) 
	{
		j = 0;
		while (j < N) 
		{
			scanf("%f", &mas[i][j]);
			j++;
		}
		i++;
	}

	avg = 0;
	max = mas[0][0];
	min = mas[0][0];

	i = 0;
	while (i < M) 
	{
		j = 0;
		while(j < N)
		{
			if (mas[i][j] > max) 
			{
				max = mas[i][j];
			}
			if (mas[i][j] < min)
			{
				min = mas[i][j];
			}

			avg = avg + mas[i][j];
			j++;
		}
		i++;
	}
	avg = avg / (M * N);
	printf("%.4f %.4f %.4f \n", max, min, avg);
	return 0;
}