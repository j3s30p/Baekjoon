#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int C;
    scanf("%d", &C);
    int *arr;
    for (int i = 0; i < C; i++)
    {
        int N;
        scanf("%d", &N);
        arr = (int *)malloc(N * sizeof(int));
        int avrg = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
            avrg += arr[j];
        }
        avrg /= N;
        float cout = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] > avrg)
            {
                cout++;
            }
        }
        printf("%.3f%%\n", (cout / N) * 100);
    }
    free(arr);
    return 0;
}