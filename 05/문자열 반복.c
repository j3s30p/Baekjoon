#include <stdio.h>
#include <string.h>

void repeat(int r, char *s);

int main(void)
{
    int T, R;
    char S[20];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, S);
        repeat(R, S);
        printf("\n");
    }
    return 0;
}

void repeat(int r, char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%c", s[i]);
        }
    }
}