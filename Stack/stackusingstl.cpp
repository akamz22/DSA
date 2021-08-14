#include <iostream>
#include <stack>
//#include <algorithm>
using namespace std;

void rev(string s)
{
    stack<string> st;
    
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != '.' && i < s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}

int main()
{
    string s = "Hey, how are you doing?";
    cout<<"The original string is.........\n"<<s<<endl;
    cout<<"String after reversing words.....\n";
    rev(s);
    return 0;
}