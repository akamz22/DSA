#include <iostream>
#include <stack>
#include <string>
using namespace std;
int depth(string s)
{
    stack<char> stk;
    int count = 0;
    int maxcount=0;
    for (int i = 0; i < s.length(); i++)
    {
       if(s[i] == '('){
            stk.push(s[i]);
            count++;
        }
        if(s[i] == ')'){   // one parentheses has been balanced
            stk.pop();
            count--;
        }
        if(maxcount < count){
            maxcount = count;
        } 
    }
}
int main()
{
    string s;
    cin >> s;
    int x = depth(s);
    cout << x;
    return 0;
}