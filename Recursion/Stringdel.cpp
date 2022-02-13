#include <iostream>
using namespace std;
string del(string s, string up)
{

    if (up.length() == 0)
    {
        //cout << s;
        return s;
    }
    char ch = up[0];
    if (up[0] == up[1])
    {
        return del(s, up.substr(2));
    }
    else
    {
        return del(s + ch, up.substr(1));
    }
}
int main()
{
    string up;
    cin >> up;
    string s = "";
    cout << del(s, up) << endl;
    return 0;
}