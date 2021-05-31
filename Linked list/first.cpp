#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(Node **head, int data)
{
    Node *new_node = new Node();

    new_node->data = data;

    new_node->next = (*head);

    (*head) = new_node;
}

void print(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    Node *temp = NULL;

    // temp = new Node();
    temp = head;

    cout<<"Before pushing elements....."<<endl;
    print(temp);
    push(&temp,7);
    push(&temp,8);
    
    cout<<"After pushing elements at front......"<<endl;
    print(temp);
    return 0;
}