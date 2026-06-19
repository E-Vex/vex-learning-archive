#include <stdio.h>

int main(void)
{
    printf("=======================================================\n");
    printf("   Welcome to Inverted Right Triangle Pattern Drawer\n");
    printf("=======================================================\n");
    printf("Enter the size you want (1-50): ");

    int size = 0;

    if (scanf("%d", &size) == 1 && size > 0 && size <= 50)
    {
        printf("\n");
        for (int i = size; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
        printf("\nDone! Triangle of size %d printed successfully.\n", size);
    }
    else
    {
        printf("\nInput ERROR! Please enter a number between 1 and 50.\n");
        return 1;
    }

    return 0;
}