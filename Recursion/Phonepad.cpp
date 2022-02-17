#include <iostream>
#include<vector>
using namespace std;
vector<string> padret(string p, string up)
{
    if (up.empty())
    {
        // cout << p << endl;
        vector<string> list;
        list.push_back(p);
        return list;
    }
    vector<string> ans;
    int digit = int(up.at(0)-'0');
    int start = ((digit - 1) * 3), end = (digit * 3);
    for (int i = start; i < end; i++)
    {
        char ch = char('a' + i);
        vector<string> small;
        ans.push_back((p + ch, up.substr(1)));
       
    }
    return ans;
}
void pad(string p, string up)
{
    if (up.empty())
    {
        cout << p << endl;
        return;
    }
    int digit = int(up.at(0)-'0');
    int start = ((digit - 1) * 3), end = (digit * 3);
    for (int i = start; i < end; i++)
    {
        char ch = char('a' + i);
        pad(p + ch, up.substr(1));
    }
}
int main()
{
    pad("","23");
    // vector<string> com = padret("","12");
    // for(auto ele : com)
    // cout<<"\n"<<ele<<" ";
    return 0;
}