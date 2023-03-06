#include <stdio.h>
#include <string.h>

void reverse(char *arr);
void print_plus(char *, char *b);

int main(void)
{
    char A[10001] = {0};
    char B[10001] = {0};
    scanf("%s %s", A, B);
    reverse(A);
    reverse(B);
    print_plus(A, B);
    return 0;
}

void reverse(char *arr)
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}
void print_plus(char *a, char *b)
{
    char result[10002] = {0};
    int len = strlen(a) >= strlen(b) ? strlen(a) : strlen(b);
    int carry = 0;
    for (int i = 0; i < len; i++)
    {
        int sum = a[i] - '0' + b[i] - '0' + carry;
        while (sum < 0)
        {
            sum += '0';
        }
        if (sum > 9)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        result[i] = sum % 10 + '0';
    }
    if (carry)
    {
        result[len] = '1';
    }
    reverse(result);
    printf("%s", result);
}
