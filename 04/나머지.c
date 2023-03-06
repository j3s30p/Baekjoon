#include <stdio.h>

int main(void)
{
    int A, B;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                arr[j] = -1;
            }
        }
    }
    int cout = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != -1)
        {
            cout++;
        }
    }
    printf("%d", cout);
    return 0;
}