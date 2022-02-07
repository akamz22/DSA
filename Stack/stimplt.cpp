#include <iostream>
#include <vector>
#include <algorithm>
#define max 100
using namespace std;
class stack
{
    int top;

public:
    int a[max];
    stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peak();
    bool isempty();
};
bool stack::push(int x)
{
    if (top >= (max - 1))
    {
        cout << "Stack full " << endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " : Pushed into stack" << endl;
        return true;
    }
}
int stack::pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        int z = a[top--];
        return z;
    }
}
int stack::peak()
{
    if (top < 0)
        cout << "Stack is empty" << endl;
    return a[top];
}
bool stack::isempty()
{
    return (top < 0);
}
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<< s.pop()<<endl;
    cout<<s.peak()<<endl;
    return 0;
}