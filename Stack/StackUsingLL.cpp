//template<typename T>
//#include<climits>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class stack
{
    Node *head;
    int size; //Number of elements in stack
public:
    stack()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void push(int element)
    {
        Node *temp = new Node(element);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    int top()
    {
        return head->data;
    }
};
int main()
{
    stack st;
    st.push(100);
    st.push(101);
    st.push(102);
    st.push(103);
    st.push(104);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.getSize() << endl;
    cout << st.isEmpty() << endl;
    return 0;
}