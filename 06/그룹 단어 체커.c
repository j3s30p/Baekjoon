#include <stdio.h>
#include <string.h>

int is_group(char *arr);

int main(void)
{
    int N;
    scanf("%d", &N);
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        char arr[100];
        scanf("%s", arr);
        if (is_group(arr))
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}

int is_group(char *arr)
{
    int len = strlen(arr);
    for (int i = 1; i < len; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
