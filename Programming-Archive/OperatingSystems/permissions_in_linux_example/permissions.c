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

// In this example, we have a file with permissions represented by the variable `file_permissions`, which is set to 6 (binary 110). The write permission is represented by the variable `write_mask`, which is set to 2 (binary 010).
// The bitwise AND operator (`&`) is used to check if the write permission is present in the file permissions. If the result is non-zero, it means the write permission is granted, and we print a success message. Otherwise, we print an error message indicating that permission is denied.
// Note: In a real-world application, file permissions would typically be represented using a more complex structure, such as a bitmask or an enumeration, to allow for multiple permissions (read, write, execute) and different user roles (owner, group, others).
// Output:
// Success: You have WRITE permission to this file!