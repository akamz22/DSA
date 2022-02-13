#include <iostream>
using namespace std;
int sumN(int n)
{
    if (n == 1)
        return 1;
    return n % 10 + sumN(n -1);
}
int main()
{
    cout << sumN(6);
    return 0;
}