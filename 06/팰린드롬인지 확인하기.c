#include <stdio.h>
#include <string.h>

int palindrome(char *arr)
{
	int len;

	len = strlen(arr);
	for (int i = 0; i < len / 2; i++)
		if (arr[i] != arr[len - i - 1])
			return (0);
	return (1);
}

int main()
{
	char arr[101];

	scanf("%s", arr);
	printf("%d", palindrome(arr));
	return (0);
}