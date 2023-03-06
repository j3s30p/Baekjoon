#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int N, M;
	int	i, j;
	int	size, box;
	int *basket;

	scanf("%d %d", &N, &M);
	basket = (int *)malloc(sizeof(int) * N);
	if (!basket)
		return (0);
	for (int n = 0; n < N; n++)
		basket[n] = n + 1;
	for (int n = 0; n < M; n++)
	{
		scanf("%d %d", &i, &j);
		i--;
		j--;
		size = j - i;
		for (int nn = 0; nn <= size / 2; nn++)
		{
			box = basket[i];
			basket[i] = basket[j];
			basket[j] = box;
			i++;
			j--;
		}
	}
	for (int n = 0; n < N; n++)
		printf("%d%c", basket[n], " \n"[n == N - 1]);
	free(basket);
	return (0);
}
