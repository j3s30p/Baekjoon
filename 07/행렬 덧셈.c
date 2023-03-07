#include <stdio.h>
#include <stdlib.h>

void free_arr(int **arr, int index)
{
	for (int i = 0; i < index; i++)
		free(arr[i]);
	free(arr);
}

int main()
{
	int N, M;
	int **arr_A, **arr_B;

	scanf("%d %d", &N, &M);
	arr_A = (int **)malloc(sizeof(int *) * N);
	arr_B = (int **)malloc(sizeof(int *) * N);
	if (!arr_A || !arr_B)
		return (0);
	for (int i = 0; i < N; i++)
	{
		arr_A[i] = (int *)malloc(sizeof(int *) * M);
		if (!arr_A[i])
		{
			free_arr(arr_A, i);
			return (0);
		}
		arr_B[i] = (int *)malloc(sizeof(int *) * M);
		if (!arr_B[i])
		{
			free_arr(arr_B, i);
			return (0);
		}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &arr_A[i][j]);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &arr_B[i][j]);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%d%c", arr_A[i][j] + arr_B[i][j], " \n"[j == M - 1]);
	}
	free_arr(arr_A, N);
	free_arr(arr_B, N);
	return (0);
}