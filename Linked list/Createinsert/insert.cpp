#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *A;
    A = NULL;

    Node *temp = new Node();
    temp->data = 2;
    temp->next = NULL;
    A = temp;

    temp = new Node();
    temp->next = NULL;
    Node *temp1 = A;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    return 0;
}