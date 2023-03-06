#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (M - 45 < 0)
    {
        M = 60 + (M - 45);
        if (H == 0)
        {
            H = 23;
        }
        else
        {
            H -= 1;
        }
        printf("%d %d", H, M);
    }
    else
    {
        printf("%d %d", H, M - 45);
    }
    return 0;
}