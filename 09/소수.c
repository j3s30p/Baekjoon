#include <stdio.h>

void decimal(int m, int n);
int main(void)
{
    int M, N;
    scanf("%d\n%d", &M, &N);
    decimal(M, N);
    return 0;
}
void decimal(int m, int n)
{
    int sum = 0;
    int min = 0;
    while (m <= n)
    {
        int i = 2;
        while (i < m)
        {
            if (!(m % i))
            {
                break;
            }
            i++;
        }
        if (i == m)
        {
            if (!min)
            {
                min = m;
            }
            sum += m;
        }
        m++;
    }
    if (!min)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }
}