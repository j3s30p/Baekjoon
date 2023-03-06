#include <stdio.h>
#include <string.h>

int time2call(char *arr);

int main(void)
{
    char arr[15];
    scanf("%s", arr);
    printf("%d", time2call(arr));
    return 0;
}

int time2call(char *arr)
{
    int len = strlen(arr);
    int time = 0;
    for (int i = 0; i < len; i++)
    {
        char num = arr[i];
        switch (num)
        {
        case 'A':
        case 'B':
        case 'C':
        {
            time += 1;
            break;
        }
        case 'D':
        case 'E':
        case 'F':
        {
            time += 2;
            break;
        }
        case 'G':
        case 'H':
        case 'I':
        {
            time += 3;
            break;
        }
        case 'J':
        case 'K':
        case 'L':
        {
            time += 4;
            break;
        }
        case 'M':
        case 'N':
        case 'O':
        {
            time += 5;
            break;
        }
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        {
            time += 6;
            break;
        }
        case 'T':
        case 'U':
        case 'V':
        {
            time += 7;
            break;
        }
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        {
            time += 8;
            break;
        }
        }
        time += 2;
    }
    return time;
}