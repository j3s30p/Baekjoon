#include <stdio.h>

int sugar(int n);
int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d", sugar(N));
    return 0;
}
int sugar(int n)
{
    int result = 0;
    while (n > 0)
    {
        if (!(n % 5))
        {
            result += n / 5;
            break;
        }
        n -= 3;
        result++;
    }
    if (n < 0)
    {
        result = -1;
    }
    return result;
}