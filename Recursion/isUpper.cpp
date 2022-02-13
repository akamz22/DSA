#include <iostream>
using namespace std;
char iu(string s, int i = 0)
{
    if (s[i] == '\0')
        return 0;
    if (isupper(s[i]))
        return s[i];
    return iu(s, i + 1);
}
int main()
{
    cout << iu("geekForkm");
    return 0;
}