#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string del(string p, string up)
{
    if (up.length() == 0)
    {
        cout << p;
        return "";
    }
    char ch = up[0];
    if (ch == 'a')
    {
        return del(p, up.substr(1));
    }
    else
    {
        return del(p + ch, up.substr(1));
    }
}
int main()
{
    del("","baccdah");
    return 0;
}