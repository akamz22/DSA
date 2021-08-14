#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *head = NULL;

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(int data)
{
    Node *new_node = new Node();

    new_node->data = data;

    new_node->next = head;

    head = new_node;
}

void print(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int size(Node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int middleElement(int size, Node *head_ref)
{
    int middle = 0;
    int mid=size/2;
    for (int i = 1; i <= size-1; i++)
    {
        head_ref = head_ref->next;
    }
    middle = head_ref->data;
    return middle;
}
int main()
{

    Node *temp = NULL;
    temp = head;

    cout << "Before pushing elements....." << endl;
    print(temp);

    push(7);
    push(8);
    push(9);
    push(40); //middle element
    push(10);
    push(12);
    push(13);

    cout << "After pushing elements at front......" << endl;
    print(head);

    cout << "\nSize of linked list is :" << size(head) << endl;

    int n = size(head);
    int mid = middleElement(n, head);
    cout << "Middle element is : " << mid << endl;
    return 0;
}