#include <stdio.h>

void print_star(int max)
{
	int curr, size;

	for (int i = 0; i < max; i++)
	{
		if (i <= max / 2)
			curr = 1 + 2 * i;
		else
			curr = max - 2 * (i - max / 2);
		size = (curr - 1) / 2;
		for (int j = 0; j <= (max / 2) + size; j++)
		{
			printf("%c", " *"[j >= (max / 2) - size]);
		}
		if (i < max - 1)
			printf("\n");
	}
}

int main()
{
	int N;

	scanf("%d", &N);
	print_star(2 * N - 1);
	return (0);
}