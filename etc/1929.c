#include <stdio.h>

void decimal(int m, int n);
int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    decimal(M, N);
    return 0;
}
void decimal(int m, int n)
{
    int arr[1000001] = {0, 1, 0};
    for (int i = 2; i <= n; i++)
    {
        if (!(arr[i]))
        {
            for (int j = 2; i * j <= n; j++)
            {
                arr[i * j] = 1;
            }
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (!(arr[i]))
        {
            printf("%d\n", i);
        }
    }
}