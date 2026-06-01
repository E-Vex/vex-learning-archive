#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;

} Node;

Node *createNode(int data)
{

    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    return node;
}

int main()
{
    Node *head = createNode(10);
    printf("Node data: %d\n", head->data);

    return 0;
}