#include <stdio.h>
#include <stdlib.h>
//inserting at begining
struct Node
{
    int data;
    struct Node *next;
}*head,*second,*third;

void linkedListTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 33;
    third->next = NULL;
    linkedListTraverse(head);

    struct Node *unknown;
    unknown = (struct Node *)malloc(sizeof(struct Node));

    unknown->data = 101; 
    unknown->next = head; //connecting address of the old head to the new node 
    head = unknown; //making the node as the new head 
    linkedListTraverse(head);
    return 0;
}
