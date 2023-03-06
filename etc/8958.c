#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    char arr[80];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int score = 0;
        int cont = 1;
        scanf("%s", arr);
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O')
            {
                score += cont;
                cont++;
            }
            else
            {
                cont = 1;
            }
        }
        printf("%d\n", score);
    }

    return 0;
}