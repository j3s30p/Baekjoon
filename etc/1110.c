#include <stdio.h>

int split(int N, int *a, int *b)
{
    *a = N / 10;
    *b = N % 10;
    return 0;
}
int getNewNum(int a, int b)
{
    int first, second;
    first = b * 10;
    second = (a + b) % 10;
    return first + second;
}
int main(void)
{
    int N;
    scanf("%d", &N);
    int a, b;
    split(N, &a, &b);
    int newNum = -1;
    int i = 0;
    while (newNum != N)
    {
        newNum = getNewNum(a, b);
        split(newNum, &a, &b);
        i++;
    }
    printf("%d", i);
    return 0;
}