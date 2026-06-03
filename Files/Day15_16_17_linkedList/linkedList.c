#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int_Node *head = node_data(10); // Create head node
    // head->data = 10;
    // head->next = NULL;

    int_Node *second = node_data(20); // Create second node
    // second->data = 20;
    // second->next = NULL;

    head->next = second; // Link head to second

    int_Node *third = node_data(30); // Create third nodes
    // third->data = 30;
    // third->next = NULL;

    second->next = third; // Link second to third

    /*---------------------------------------------------------------------------------------*/

    int_Node *currentPointer = head;
    int i = 1;
    while (currentPointer != NULL)
    {
        printf("Node %d : %d\n", i, currentPointer->data);
        currentPointer = currentPointer->next;
        i++;
    }

    return 0;
}