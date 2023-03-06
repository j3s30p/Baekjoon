#include <stdio.h>
#include <string.h>

void alphabet(char *arr);

int main(void)
{
    char S[100];
    scanf("%s", S);
    alphabet(S);
    return 0;
}

void alphabet(char *arr)
{
    for (int i = 97; i < 123; i++)
    {
        int end = 1;
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == i)
            {
                printf("%d ", j);
                end = 0;
                break;
            }
        }
        if (end)
        {
            printf("-1 ");
        }
    }
}