#include <iostream>
using namespace std;
void count(string p, int r, int c)
{

    if (r == 1 && c == 1)
    {
        cout << p << endl;
    }

    if (c > 1)
        count(p + "D", r, c-1);
    if (r > 1)
        count(p + "R", r-1, c);
}
int main()
{
    int r, c;
    cin >> r >> c;
    string p = "";
    count(p, r, c);
    return 0;
}