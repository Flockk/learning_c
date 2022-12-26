#include <stdio.h>
#define M 4
#define N 4

void transpose(int A[M][N], int T[N][M]) 
{
	for (int i = 0; i < M; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			T[j][i] = A[i][j];
		}
	}
}

int main() 
{
	int A[M][N];
	int T[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	transpose(A, T);

	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			if (j < N - 1)
			{
				printf("%d ", T[i][j]);
			}
			else 
			{
				printf("%d", T[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}