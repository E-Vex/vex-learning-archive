#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{

    int *ptr = NULL;
    ptr = calloc(1, sizeof(int));
    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Exit with an error code
    }
    else
    {
        printf("Memory allocation successful.\n");
        int *copy = ptr;
        ptr = NULL;
        printf("The memory address we allocated in the heap: %p\n", copy);
        ptr = copy;
        copy = NULL;
        printf("The value stored in the allocated memory: %d\n", *ptr);

        *ptr = 973;

        printf("The value stored in the allocated memory after modification: %d\n", *ptr);
        printf("copy address: %p\n", copy);
    }

    free(ptr);
    return 0;
}