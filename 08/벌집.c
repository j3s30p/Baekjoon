#include <stdio.h>

int room(unsigned int n);
int main(void)
{
    unsigned int N;
    scanf("%d", &N);
    printf("%d", room(N));
    return 0;
}
int room(unsigned int n)
{
    if (n == 1)
    {
        return 1;
    }
    int result = 2;
    int min = 2, max = 7;
    while (!(n >= min && n <= max))
    {
        min = max;
        max += 6 * result;
        result++;
    }
    return result;
}