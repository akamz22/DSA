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

int main()
{
    
 

    Node *temp = NULL;

    // temp = new Node();
    temp = head;

    cout<<"Before pushing elements....."<<endl;
    print(temp);


    push(7);
    push(8);
    push(9);
    push(40);
    push(10);
    push(12);
    push(13);
    
    
    cout<<"After pushing elements at front......"<<endl;
    print(head);

     int l=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>l;
        push(l);
    }
    

    cout<<"After pushing more elements at front......"<<endl;
    print(head);


    return 0;
}