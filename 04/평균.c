#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    double *arr;
    arr = (double *)malloc(N * sizeof(double));
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &arr[i]);
    }
    double max = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    double avrg = 0;
    for (int i = 0; i < N; i++)
    {
        arr[i] = (arr[i] / max) * 100;
        avrg += arr[i];
    }
    printf("%f", avrg / N);
    free(arr);
    return 0;
}