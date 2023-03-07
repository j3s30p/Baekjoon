#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[6][16];
	int max_len;

	max_len = 0;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 16; j++)
			str[i][j] = '\0';
	for (int i = 0; i < 5; i++)
		scanf("%s", str[i]);
	for (int i = 0; i < 5; i++)
		if ((int)strlen(str[i]) > max_len)
			max_len = (int)strlen(str[i]);
	for (int i = 0; i < max_len; i++)
		for (int j = 0; j < 5; j++)
			if (str[j][i])
				printf("%c", str[j][i]);
	return (0);
}