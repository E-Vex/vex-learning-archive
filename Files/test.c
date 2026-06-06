void insert_at_end(int_Node *head, int newData)
{
    int_Node *currentPointer = head; 
  
      while(1)
      {     
        if(currentPointer-> next == NULL)
        {
            int_Node *endNode = currentPointer;
            break;
        }
        currentPinter = currentPointer->next;
      }
      endNode->next = malloc(sizeof(int_Node));
      endNode->next->data = newData;
      endNode->next->next = NULL;
}



main
{
  insert_at_end(head, 10); 
}
