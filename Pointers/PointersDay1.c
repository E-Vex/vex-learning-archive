#include <stdio.h>

void double_it(int *x)
{
    *x = *x * 2;
}

int main()
{
    int num = 5;
    double_it(&num);
    printf("The doubled value is: %d\n", num);
    return 0;
}