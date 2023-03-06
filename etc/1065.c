#include <stdio.h>
#include <stdlib.h>

int hansu(int n)
{
    if (n < 10)
    {
        return 1;
    }
    int num = n;
    int cout = 0;

    while (num)
    {
        num /= 10;
        cout++;
    }
    int *arr;
    arr = (int *)malloc(cout * sizeof(int));
    for (int i = 0; i < cout; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    int diff = arr[cout - 1] - arr[cout - 2];
    for (int i = cout - 1; i > 0; i--)
    {
        if ((arr[i] - arr[i - 1]) != diff)
        {
            free(arr);
            return 0;
        }
    }
    return 1;
}
int is_hansu(int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (hansu(i + 1))
        {
            result++;
        }
    }
    return result;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int result;
    result = is_hansu(N);
    printf("%d", result);
    return 0;
}