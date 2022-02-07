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

int main()
{

    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->data = 12;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 13;
    second->next = NULL;

    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    

    return 0;
}