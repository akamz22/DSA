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

void printlist(Node *temp_head)
{
    while (temp_head != NULL)
    {
        cout << temp_head->data << " ";
        temp_head = temp_head->next;
    }
}
void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *temp_head = *head_ref;
    new_node->data = new_data;
    //new_node->next = temp_head;
    new_node->next = NULL;
    if (temp_head == NULL)
    {
        temp_head = new_node;
        return;
    }
    while (temp_head->next != NULL)
    {
        temp_head = temp_head->next;
    }
    temp_head->next= new_node;
    return;
}
void push(Node **head_ref, int newdata)
{

    Node *put = new Node();
    put->data = newdata;
    put->next = *head_ref;
    *head_ref = put;
}
int main()
{
    Node *head = NULL;
    push(&head, 4);
    push(&head, 3);
    cout << "After inserting at front...."<<endl;
    printlist(head);

    append(&head, -1);
    append(&head, -2);
    append(&head, -3);
    cout << "\nAfter inserting at and...." << endl;

    printlist(head);

    return 0;
}