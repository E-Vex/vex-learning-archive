#include <stdio.h>

int main()
{

    char file_permissions = 6;

    char write_mask = 2;

    if (file_permissions & write_mask)
    {
        printf("Success: You have WRITE permission to this file!\n");
    }
    else
    {
        printf("Error: Permission Denied! You cannot write to this file.\n");
    }

    return 0;
}