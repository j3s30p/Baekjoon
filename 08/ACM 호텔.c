#include <stdio.h>

void print_hotel(int h, int w, int n);
int main(void)
{
    int T, H, W, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        print_hotel(H, W, N);
    }
    return 0;
}
void print_hotel(int h, int w, int n)
{
    int floor, room = 1;
    while (n > h)
    {
        n -= h;
        room++;
    }
    floor = n;
    printf("%d%02d\n", floor, room);
}