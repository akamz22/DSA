#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *push(struct node **headref, int newdata)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node *));
    newNode->data = newdata;
    newNode->next = *headref;
    *headref = newNode;
    return *headref;
}
struct node *insert(struct node *head, int newdata)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));

    temp->data = newdata;
    temp->next = NULL;
    struct node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    return head;
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node *));
    struct node *first = (struct node *)malloc(sizeof(struct node *));
    struct node *second = (struct node *)malloc(sizeof(struct node *));
    struct node *third = (struct node *)malloc(sizeof(struct node *));
    head->data = 11;
    head->next = first;
    first->data = 22;
    first->next = second;
    second->data = 33;
    second->next = third;
    third->data = 44;
    third->next = NULL;
    display(head);
    head = push(&head, 77);
    head = push(&head, 88);
    head = push(&head, 99);
    head = push(&head, 100);
    head = push(&head, 110);
    display(head);
    head = insert(head, 1111);
    head = insert(head, 1112);
    head = insert(head, 1113);
    display(head);
}