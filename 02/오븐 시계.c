#include <stdio.h>

int main(void)
{
    int A, B, C;
    int min;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    min = B + C;
    if (min >= 60)
    {
        int plusHour;
        plusHour = min / 60;
        A += plusHour;
        if (A > 23)
        {
            A -= 24;
        }
        printf("%d %d", A, min % 60);
    }
    else
    {
        printf("%d %d", A, B + C);
    }
    return 0;
}