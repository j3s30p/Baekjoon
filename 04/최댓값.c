#include <stdio.h>

int main(void)
{
    int max = 0, cout = 0;
    int num;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
            cout = i + 1;
        }
    }
    printf("%d\n%d", max, cout);
    return 0;
}