#include <stdio.h>

int my_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        str++;
        count++;
    }
    return count;
}

int main()
{
    char str[] = "ABCDEFG";
    int s = my_strlen(str);
    printf("Length of string: %d\n", s);
}