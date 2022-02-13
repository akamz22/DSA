#include <iostream>
using namespace std;
int pro(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    return a + pro(a, b - 1);
}
int main()
{
    cout << pro(18, 8);
    return 0;
}