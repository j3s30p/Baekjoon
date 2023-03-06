#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	int len;
	char arr[1001];

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", arr);
		len = strlen(arr);
		printf("%c%c\n", arr[0], arr[len - 1]);
	}
	return (0);
}