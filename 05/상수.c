#include <stdio.h>

int reverse(int n);
int printReverse(int a, int b);

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", printReverse(A, B));
    return 0;
}

int reverse(int n)
{
    int first, second, third;
    first = n % 10;
    second = (n % 100) / 10;
    third = n / 100;
    return (first * 100) + (second * 10) + third;
}
int printReverse(int a, int b)
{
    int reA, reB;
    reA = reverse(a);
    reB = reverse(b);
    if (reA > reB)
    {
        return reA;
    }
    else
    {
        return reB;
    }
}