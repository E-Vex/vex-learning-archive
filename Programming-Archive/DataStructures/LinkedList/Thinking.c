#include <stdio.h>

int edit_head(int **headRef)
{
    printf("You entered the edit_head() function\n");
    printf("printing headRef : ");
    printf("%p\n", headRef);
    printf("printing *headRef : ");
    printf("%p\n", *headRef);
    printf("this code is from edit_head() function");
}

int main()
{
    int *head = NULL;

    printf("the value of head : %p\n", head);
    printf("head is here : %p\n", &head);

    printf("now we will send the location of head to the function edit_head()\n");
    printf(". . .\n");

    edit_head(&head);
    printf("the location of head sent\n");

    return 0;
}
