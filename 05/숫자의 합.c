#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    char *arr;
    arr = (char *)malloc(N * sizeof(char));
    scanf("%s", arr);
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        result += arr[i] - 48;
    }
    printf("%d", result);
    free(arr);
    return 0;
}