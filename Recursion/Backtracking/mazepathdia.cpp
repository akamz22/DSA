#include <iostream>
using namespace std;
void pathdia(string p, int r, int c)
{

    if (r == 1 && c == 1)
    {
        cout << p << endl;
    }
    if ((r > 1 && c > 1)&&r==c)
        //$ === diagonal//
        pathdia(p + "$", r - 1, c - 1);
    if (r > 1)
        pathdia(p + "D", r - 1, c);
    if (c > 1)
        pathdia(p + "R", r, c - 1);
}
int main()
{
    int r, c;
    cin >> r >> c;
    string p = "";
    pathdia(p, r, c);
    return 0;
}