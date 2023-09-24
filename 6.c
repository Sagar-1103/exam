// Linked List creation and traversing

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
}

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
    return 0;
}
