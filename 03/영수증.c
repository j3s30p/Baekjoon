#include <stdio.h>

int main(void)
{
    int X, N, a, b;
    scanf("%d", &X);
    scanf("%d", &N);
    int i, result;
    i = 0;
    result = 0;
    while (i < N)
    {
        scanf("%d %d", &a, &b);
        result += a * b;
        i++;
    }
    if (result == X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}