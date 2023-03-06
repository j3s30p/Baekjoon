#include <stdio.h>

int main(void)
{
    int arr[30];
    for (int i = 0; i < 30; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 28; i++)
    {
        int num;
        scanf("%d", &num);
        arr[num - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (!arr[i])
        {
            printf("%d\n", i + 1);
        }
    }
    return 0;
}