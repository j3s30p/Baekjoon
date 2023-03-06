#include <stdio.h>

int num(int k, int n);
int main(void)
{
    int T, k, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", num(k, n));
    }
    return 0;
}
int num(int k, int n)
{
    int result;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < k; i++)
    {
        result = 0;
        for (int j = 0; j < n; j++)
        {
            result += arr[j];
            arr[j] = result;
        }
    }
    return result;
}