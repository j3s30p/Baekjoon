#include <stdio.h>

void factorization(int n);
int main(void)
{
    int N;
    scanf("%d", &N);
    factorization(N);
    return 0;
}
void factorization(int n)
{
    if (n == 1)
    {
        return;
    }
    int i = 2;
    while (i < n)
    {
        if (!(n % i))
        {
            printf("%d\n", i);
            n /= i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
    printf("%d", n);
}