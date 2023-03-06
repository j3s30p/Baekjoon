#include <stdio.h>

int d(int n)
{
    int result = n;
    int num = n;
    while (num)
    {
        result += num % 10;
        num /= 10;
    }
    return result - 1;
}
int main(void)
{
    int arr[10000];
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10000; i++)
    {
        int num = d(i + 1);
        if (num < 10000)
        {
            arr[num] = -1;
        }
        if (arr[i] != -1)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}