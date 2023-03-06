#include <stdio.h>

void decimal(int n);
int main(void)
{
    int n;
    while ((scanf("%d", &n)))
    {
        if (!n)
        {
            break;
        }
        decimal(n);
    }
    return 0;
}
void decimal(int n)
{
    int arr[246913] = {0, 1, 0};
    for (int i = 2; i < 246913; i++)
    {
        if (!(arr[i]))
        {
            for (int j = 2; i * j < 246913; j++)
            {
                arr[i * j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = n + 1; i <= 2 * n; i++)
    {
        if (!(arr[i]))
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
}