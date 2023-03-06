#include <stdio.h>

void print_fraction(int x);
int main(void)
{
    int X;
    scanf("%d", &X);
    print_fraction(X);
    return 0;
}
void print_fraction(int x)
{
    int min = 1, max = 2;
    int a = 1, b = 1;
    int i = 2;
    while (!(x >= min && x < max))
    {
        min = max;
        max += i;
        if (i % 2 == 1)
        {
            a = max - x;
            b = (x - min) + 1;
        }
        else
        {
            a = (x - min) + 1;
            b = max - x;
        }
        i++;
    }
    printf("%d/%d", a, b);
}
