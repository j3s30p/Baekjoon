#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, X;
    scanf("%d %d", &N, &X);
    int *arr;
    arr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < X)
        {
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}