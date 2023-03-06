#include <stdio.h>
#include <stdlib.h>

void swap(int begin, int end, int mid, int *arr, int *cp_arr)
{
	int index, cp_index_mid, cp_index_begin;

	index = begin;
	cp_index_mid = mid;
	cp_index_begin = begin;
	while (index <= end)
	{
		if (index <= begin + end - mid)
			arr[index++] = cp_arr[cp_index_mid++];
		else
			arr[index++] = cp_arr[cp_index_begin++];
	}
}

int main()
{
	int N, M;
	int begin, end, mid;
	int *basket;
	int *cp_basket;

	scanf("%d %d", &N, &M);
	basket = (int *)malloc(sizeof(int) * N);
	cp_basket = (int *)malloc(sizeof(int) * N);
	if (!basket || !cp_basket)
		return (0);
	for (int n = 0; n < N; n++)
		basket[n] = n + 1;
	for (int n = 0; n < M; n++)
	{
		for (int nn = 0; nn < N; nn++)
			cp_basket[nn] = basket[nn];
		scanf("%d %d %d", &begin, &end, &mid);
		swap(begin - 1, end - 1, mid - 1, basket, cp_basket);
	}
	for (int n = 0; n < N; n++)
		printf("%d%c", basket[n], " \n"[n == N - 1]);
	free(basket);
	free(cp_basket);
	return (0);
}
