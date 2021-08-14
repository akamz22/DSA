#include <iostream>
#include <stack>
//#include <algorithm>
using namespace std;
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    cout << st.top() << endl;
    cout << "Size of stack is : " << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}