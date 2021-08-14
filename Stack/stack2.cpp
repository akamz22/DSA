#include <iostream>
#include <stack>
#define n 100
using namespace std;

class stack1
{
    int *arr;
    int top;

public:
    stack1()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
        }
        top++;
        arr[top] = x;
    }
    int Top()
    {
        if (top <= -1)
        {
            cout << "No elements in stack" << endl;
        }
        return arr[top];
    }
    void pop()
    {
        if (top <= -1)
        {
            cout << "No elements in stack" << endl;
        }
        top--;
    }
    bool isempty()
    {
        return (top <= -1);
    }
    int size()
    {
        return top + 1;
    }
};

int main()
{
    stack1 st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << "Size of stack is " << st.size() << endl;
    cout << st.Top() << " ";
    st.pop();
    cout << st.Top() << " ";
    cout << "is stack empty " << st.isempty() << endl;
    cout << "Printing stack elements.........." << endl;
    int count = 0;
    while (!st.isempty())
    {
        cout << st.Top() << endl;
        st.pop();
        count++;
    }
    return 0;
}