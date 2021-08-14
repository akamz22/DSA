#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printlist(Node *head_ref)
{
    while (head_ref != NULL)
    {
        cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
}
void deleteFromBeginning(Node **head)
{
    (*head) = (*head)->next;
}

void deleteFromEnd(Node **head)
{
    Node **temp = head;
    while ((*temp)->next->next != NULL)
    {
        (*temp) = (*temp)->next;
    }
    (*temp)->next = NULL;
}
void deleteFromPosition(Node **head_ref, int position)
{
    for (int i = 0; i < position - 1; i++)
    {
        if ((*head_ref)->next != NULL)
        {
            (*head_ref) = (*head_ref)->next;
        }
    }
    cout << endl;
    cout << "In head_ref : " << (*head_ref)->data << endl;
    (*head_ref)->next = (*head_ref)->next->next;
}
int main()
{

    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    head = new Node();
    first = new Node();
    second = new Node();
    third = new Node();
    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    cout << "The list is.." << endl;
    printlist(head);

    deleteFromBeginning(&head);
    cout << "\nAfter deleting element from beginning list is...." << endl;
    printlist(head);

    cout << "\nAfter deleting element from end list is...." << endl;
    Node *temp = head;
    deleteFromEnd(&temp);
    printlist(head);

    cout << "\nAfter deleting element from position list is...." << endl;
    deleteFromPosition(&temp, 1);
    printlist(head);
    return 0;
}



