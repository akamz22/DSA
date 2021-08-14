#include <iostream>
#define n 100
using namespace std;

class stack
{
    int *arr;
    int top;

public:
    stack()
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
    void pop()
    {
        if (top <= -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top <= -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty()
    {
        return (top <= -1);
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<"Is atack empty "<<st.isempty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"Is atack empty "<<st.isempty()<<endl;
    return 0;
}