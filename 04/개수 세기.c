#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *arr;
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int v;
    scanf("%d", &v);
    int cout = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == v)
        {
            cout++;
        }
    }
    printf("%d", cout);
    free(arr);
    return 0;
}