#include <stdio.h>
#include <string.h>

void printAlphabet(char *arr);

int main(void)
{
    char s[1000000];
    scanf("%s", s);
    printAlphabet(s);
    return 0;
}

void printAlphabet(char *arr)
{
    int alpha[26];
    int len = strlen(arr);
    for (int i = 0; i < 26; i++)
    {
        alpha[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
        alpha[arr[i] - 65] += 1;
    }
    int big = 0;
    int result;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] >= big)
        {
            big = alpha[i];
            result = i;
        }
    }
    int dup = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == big)
        {
            dup += 1;
        }
    }
    if (dup > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", result + 65);
    }
}