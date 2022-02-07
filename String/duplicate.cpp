#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
            cout << it.first << " " << it.second << endl;
    }
    return 0;
}