#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *head;

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on at nition p of the list. */
void push(int data, int n)
{
    Node *temp1 = new Node();

    temp1->data = data;

    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < n; i++)
    {
        temp = temp->next;
    }
    temp1->next = temp->next;
    temp->next = temp1;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    push(7, 1);
    push(8, 2);
    push(9, 3);
    push(40, 4);
    push(10, 5);
    push(12, 6);
    push(13, 7);

    cout << "After pushing elements ......" << endl;
    print();

    return 0;
}