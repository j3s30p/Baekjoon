#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	N, M;
	int	i, j, k;
	int	*basket;

	scanf("%d %d", &N, &M);
	basket = (int *)malloc(sizeof(int) * N);
	if (!basket)
		return (0);
	for (int n = 0; n < M; n++)
	{
		scanf("%d %d %d", &i, &j, &k);
		i--;
		j--;
		while (i <= j)
			basket[i++] = k;
	}
	for (int n = 0; n < N; n++)
		printf("%d%c", basket[n], " \n"[n == N - 1]);
	free(basket);
	return (0);
}
