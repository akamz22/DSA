#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int strlen(string s)
{
    if (s.size() == 0)
        return 0;
    return 1 + strlen(s.substr(1));
}
int main()
{
    cout << strlen("sdf");
    return 0;
}