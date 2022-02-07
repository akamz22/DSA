#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
//Node *head;

Node *push(Node *head, int data)
{
    Node *new_node = new Node();

    new_node->data = data;

    new_node->next = head;

    head = new_node;
    return head;
}
Node *reverse(Node *head)
{
    Node *prev, *current, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{

    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->data = 9;
    head->next = first;

    first->data = 8;
    first->next = second;

    second->data = 7;
    second->next = NULL;

    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    head = push(head, 40);
    head = push(head, 50);

    print(head);
    cout << "\nAfter reversing " << endl;
    head = reverse(head);
    print(head);
    return 0;
}