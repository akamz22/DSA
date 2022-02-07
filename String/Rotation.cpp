#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string t = s1 + s2;
    if (t.find(s2) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}