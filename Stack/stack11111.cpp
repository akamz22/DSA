#include <iostream>
#define n 1000
using namespace std;
class stack2
{
private:
    int arr[n];
    int top;

public:
    stack2()
    {
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
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    void pop()
    {

        if (top <= -1)
        {
            cout << "No element in stack" << endl;
            return;
        }
        top--;
    }
    bool isempty()
    {
        return (top <= -1);
    }
};
int main()
{
    stack2 st;
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    return 0;
}