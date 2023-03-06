#include <stdio.h>

int BEP(int a, int b, int c);

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d", BEP(A, B, C));
    return 0;
}

int BEP(int a, int b, int c)
{
    if (b >= c)
    {
        return -1;
    }

    return (a / (c - b)) + 1;
}