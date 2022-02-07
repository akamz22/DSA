#include <iostream>
#define n 100
using namespace std;
class stack
{
private:
    int *arr;
    int top;
    int size;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
        size = 0;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Full" << endl;
            return;
        }
        top++;
        arr[top] = x;
        size++;
    }
    int Top()
    {
        if (size == 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }

        return arr[top];
    }
    int pop()
    {
        if (size == 0)
        {
            cout << "Stack is empty. No more elements to pop ! " << endl;
            return 0;
        }
        int ans = arr[top];
        size--;
        top--;
        return ans;
    }
    bool isEmpty()
    {
        return size == 0;
    }
};
using namespace std;
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    cout << st.isEmpty() << endl;

    return 0;
}