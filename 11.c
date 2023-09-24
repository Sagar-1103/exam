//inserting after specific node

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node *insertAfterNode(struct Node *head,int data,struct Node *prevNode){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
};

int main(int argc, char const *argv[])
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

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
    head = insertAfterNode(head,44,second);
    linkedListTraverse(head);
    return 0;
}
