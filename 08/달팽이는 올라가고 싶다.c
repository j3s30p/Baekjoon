#include <stdio.h>

int main(void)
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int day;
    day = (V - B) / (A - B);
    if ((V - B) % (A - B))
    {
        day++;
    }
    printf("%d", day);
    return 0;
}