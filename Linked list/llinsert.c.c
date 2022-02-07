#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *headref)
{
    while (headref != NULL)
    {
        printf("Element is : %d\n", headref->data);
        headref = headref->next;
    }
}

struct Node *push(struct Node *headref, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = headref;
    headref = newNode;
    return headref;
}
struct Node *insert(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *headref = head;
    int position, count = 0;
    printf("Enter position...\n");
    scanf("%d", &position);
    if(position==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    while (count < position - 1)
    {
        headref = headref->next;
        count++;
    }
    struct Node *a = headref->next;
    headref->next = newNode;
    newNode->next = a;
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = NULL;
    display(head);
    // head = push(head, 44);
    // printf("After inserting in the beggining...\n");
    // display(head);
    head=insert(head, 45);
    printf("After inserting in the at position...\n");
    display(head);
    return 0;
}
