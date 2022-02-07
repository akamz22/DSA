#include <iostream>
using namespace std;
void triangle(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        triangle(r, c + 1);
        cout << " * ";
    }
    else
    {
        triangle(r - 1, 0);
        cout << endl;
    }
}
int main()
{
    triangle(5, 0);
     return 0;
}