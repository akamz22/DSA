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

Node *head = new Node();
void print()
{
    Node *head1 = head;
    while (head1 != NULL)
    {
        cout << head1->data << endl;
        head1 = head1->next;
    }
}
void insert(int data)
{
    Node *temp = NULL;
    temp = new Node();

    temp->data = data;
    temp->next = NULL;
    //cout<<
    Node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

int main()
{
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    first = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 18;
    head->next = first;
    first->data = 19;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 21;
    third->next = fourth;
    fourth->data = 22;
    fourth->next = NULL;
    print();
    insert(13);
    cout << "After inserting a element at end of linked list" << endl;
    print();

    return 0;
}