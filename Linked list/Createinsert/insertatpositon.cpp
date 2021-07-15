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


void insertAtPosition(Node *head_ref, Node *prevNode, int newdata)
{
    Node *temp = new Node();
    temp->data = newdata;
    if ((prevNode) == NULL)
    {
        cout <<"Prev node cannot be null " << endl;
        return;
    }
    temp->next = (prevNode)->next;
    (prevNode)->next = temp;
}


void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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
    print(head);
    Node *temp = head;
    insertAtPosition(head, head->next, 60);
    print(temp);
    return 0;
}