#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct int_Node
{
    int data;
    struct int_Node *next;

} int_Node;

int_Node *node_data(int data)
{

    int_Node *node = malloc(sizeof(int_Node));
    node->data = data;
    node->next = NULL;

    return node;
}
void traverse_list(int_Node *head)
{
    int_Node *currentPointer = head;
    int i = 1;
    while (currentPointer != NULL)
    {
        printf("Node %d : %d\n", i, currentPointer->data);
        currentPointer = currentPointer->next;
        i++;
    }
}
void free_list(int_Node *head)
{
    int_Node *copyPointer = head;
    int_Node *currentPointer = head;
    while (currentPointer != NULL)
    {
        copyPointer = currentPointer->next;
        free(currentPointer);
        currentPointer = copyPointer;
    }
}

void insert_at_end(int_Node **headRef, int newData)
{
    int_Node **currentPointer = headRef;
    if (*headRef == NULL)
    {
        *headRef = node_data(newData);
        return;
    }
    while (1)
    {
        if ((*currentPointer)->next == NULL)
        {
            (*currentPointer)->next = node_data(newData);
            break;
        }
        currentPointer = &((*currentPointer)->next);
    }
}

void print_list(int_Node *headRef)
{
    int_Node *currentPointer = headRef;
    printf("--------------------Data--------------------\n");
    while (currentPointer != NULL)
    {

        printf("%d\n", currentPointer->data);
        currentPointer = currentPointer->next;
    }
    printf("NULL\n");
}

FILE *import_file(char filename[15])
{
    FILE *filePointer = fopen(filename, "r");
    if (filePointer == NULL)
    {
        printf("Failed to open the file\n <NULL>");

        return;
    }
    return filePointer;
}

void read_file(FILE *filePointer, int_Node **headRef)
{
    int num;
    while (fscanf(filePointer, "%d", &num) != EOF)
    {

        insert_at_end(headRef, num);
    }
}

int main()
{

    printf("Enter the file name you want to display: ");
    char file_name[15];
    scanf("%s", file_name);
    if (sizeof(file_name) > 15)
    {
        printf("Input Error <try using a shorter name>\n");
        return 0;
    }

    int_Node *head = NULL;
    FILE *filePointer = import_file(file_name);
    read_file(filePointer, &head);
    print_list(head);
    fclose(filePointer);
    free_list(head);

    return 0;
}