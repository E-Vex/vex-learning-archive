#include <stdio.h>

int count_upper(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            count++;
        }
        str++;
    }
    return count;
}

void reverse(char *str)
{
    char *start = str;
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}

int main()
{

//example on
    char str[] = "HELLO";

    reverse(str);

    char *p = str;
    while (*p)
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}
