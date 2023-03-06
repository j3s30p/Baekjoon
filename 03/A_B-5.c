#include <stdio.h>

int main(void)
{
    int A, B;
    while (1)
    {
        scanf("%d %d", &A, &B);
        if (A || B)
        {
            printf("%d\n", A + B);
        }
        else
            break;
    }
    return 0;
}