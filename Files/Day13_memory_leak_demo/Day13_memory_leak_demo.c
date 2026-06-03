#include <stdio.h>
#include <stdlib.h>

void memory_full()
{
    int *x = (int *)malloc(1024 * sizeof(int));
    if (x == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    printf("Memory allocated at address: %p\n", (void *)x);
}

void memory_free()
{

    int *x = (int *)malloc(1024 * sizeof(int));
    printf("Memory allocated at address: %p\n", (void *)x);
    free(x); // Free the allocated memory
}

int main()
{

    return 0;
}
// memory_full() demonstrates a memory leak because allocated memory is never freed.
// memory_free() demonstrates proper memory management by freeing the allocated memory.