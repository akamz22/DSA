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
        cout << " * ";
        triangle(r, c + 1);
    }
    else
    {
        cout << endl;
        triangle(r - 1, 0);
    }
}
int main()
{
    triangle(5, 0);
     return 0;
}