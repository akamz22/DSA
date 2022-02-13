#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void permute(string s, string answer)
{
    if (s.length() == 0)
    {
        //cout << answer << "\n";
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        cout<<" { "<<left_substr<<" } "<<"---"<<right_substr<<endl;
        string rest = left_substr + right_substr;
        permute(rest, answer + ch);
    }
}
int main()
{
    permute("abc", "");
    return 0;
}