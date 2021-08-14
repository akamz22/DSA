#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

string isBalanced(string s)
{

    stack<char> st;
    for (auto c : s)
    {
        switch (c)
        {
        case '{':
        case '(':
        case '[':
            st.push(c);
            break;
        case '}':
        {
            if (st.empty() || st.top() != '{')
                return "NO";
        }
            st.pop();
            break;
        case ')':
        {
            if (st.empty() || st.top() != '(')
                return "NO";
        }
            st.pop();
            break;
        case ']':
        {
            if (st.empty() || st.top() != '[')
                return "NO";
        }
            st.pop();
            break;
        }
    }
    if (st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{

    string s;
    cin >> s;
    cout << isBalanced(s);

    return 0;
}