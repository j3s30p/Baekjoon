#include <stdio.h>
#include <string.h>

int num(char *arr);

int main(void)
{
    char arr[100];
    scanf("%s", arr);
    printf("%d", num(arr));
    return 0;
}

int num(char *arr)
{
    int len = strlen(arr);
    int result = 0;
    for (int i = 0; i < len; i++)
    {
        char c = arr[i];
        switch (c)
        {
        case 'c':
            if (arr[i + 1] == '=' || arr[i + 1] == '-')
            {
                i++;
            }
            break;
        case 'd':
            if (arr[i + 1] == '-')
            {
                i++;
            }
            else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
            {
                i += 2;
            }
            break;
        case 'l':
        case 'n':
            if (arr[i + 1] == 'j')
            {
                i++;
            }
            break;
        case 's':
        case 'z':
            if (arr[i + 1] == '=')
            {
                i++;
            }
            break;
        }
        result++;
    }
    return result;
}
