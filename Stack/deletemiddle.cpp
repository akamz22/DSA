#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void push(Node **thead, int newdata)
{

    Node *newnode = new Node();
    newnode->data = newdata;
    newnode->next = *thead;
    *thead = newnode;
}

void print(Node *head_ref)
{
    while (head_ref != NULL)
    {
        cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
    cout << endl;
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
void middleElement(int size, Node *head_ref)
{
    int middle = 0;
    int mid=size/2;
    for (int i = 1; i <= mid-1; i++)
    {
        head_ref = head_ref->next;
    }
   head_ref->next=head_ref->next->next;

   // cout<<"inside midelement : "<<head_ref->data<<endl;
}

int main()
{
    Node *head = NULL;
    Node *temp = NULL;
    temp = head;
    push(&temp, 10);
    push(&temp, 11);
    push(&temp, 12);
    push(&temp, 13);
    push(&temp, 14);
    push(&temp, 15);
    push(&temp, 16);
    print(temp);
    int size1=size(temp);
    cout<<"size = "<<size1<<endl;
    middleElement(size1,temp);
    cout<<"After deleting middle "<<endl;
    print(temp);
    return 0;
}