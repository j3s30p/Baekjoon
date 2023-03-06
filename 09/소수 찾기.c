#include <stdio.h>

int decimal(int n);
int main(void)
{
    int N;
    scanf("%d", &N);
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > 1 && decimal(num))
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
int decimal(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (!(n % i))
        {
            return 0;
        }
    }
    return 1;
}
