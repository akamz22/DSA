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

int getMiddle(Node *head_ref)
{
   // Your code here
    Node *temp=head_ref;
    Node *ans_head=head_ref;
    while (ans_head->next!= NULL)
    {
        
      temp = temp->next;
      ans_head=ans_head->next->next;
      
    }
    return temp->data;
   
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
    int mid = getMiddle(head);
    cout << "\nMiddle element is : " << mid << endl;
    return 0;
}