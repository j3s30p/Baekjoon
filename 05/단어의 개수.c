#include <stdio.h>
#include <string.h>

int checkNum(char *arr);

int main(void)
{
    char arr[1000000];
    scanf("%[^\n]s", arr);
    printf("%d", checkNum(arr));
    return 0;
}

int checkNum(char *arr)
{
    int result = 1;
    int len = strlen(arr);
    int i = 0;
    if (arr[i] == ' ')
    {
        i++;
    }
    for (; i < len; i++)
    {
        if (arr[i] == ' ')
        {
            result++;
        }
    }
    if (arr[i - 1] == ' ')
    {
        result--;
    }
    return result;
}