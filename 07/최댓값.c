#include <stdio.h>

int main(void)
{
	int arr[81];
	int num, max, max_loc;

	max = 0;
	max_loc = 0;
	for (int i = 0; i < 81; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	for (int i = 0; i < 81; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_loc = i;
		}
	}
	printf("%d\n%d %d", max, max_loc / 9 + 1, max_loc % 9 + 1);
	return (0);
}
