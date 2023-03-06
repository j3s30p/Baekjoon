#include <stdio.h>

void goldbach(int n);
int main(void)
{
    int T, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        goldbach(n);
    }
    return 0;
}
void goldbach(int n)
{
}