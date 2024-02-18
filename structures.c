#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int link;
};
int main()
{
   struct node *head = NULL;
   head = malloc(sizeof(struct node));
   head->data = 54;
   head->link = NULL;
   
   struct node *current = malloc(sizeof(struct node));
   current->data = 30;
   current->link = NULL;
   head->link = current;
    printf("%d",current->data);
  return 0;
    
    
    
}

    
    
    
    
