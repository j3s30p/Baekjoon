#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == B && A == C)
    {
        printf("%d", 10000 + A * 1000);
    }
    else if (A == B || A == C)
    {
        printf("%d", 1000 + A * 100);
    }
    else if (B == C)
    {
        printf("%d", 1000 + B * 100);
    }
    else
    {
        int result;
        result = A >= B ? A : B;
        result = result >= C ? result : C;
        result *= 100;
        printf("%d", result);
    }
    return 0;
}