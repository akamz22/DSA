#include <iostream>
using namespace std;
void rev(long long n)
{
    if (n < 10)
    {
        cout << n << " ";
        return;
    }
    cout << n % 10;
    rev(n / 10);
}
int main()
{
    rev(1234);
    rev(4);
    rev(100);
    rev(0);
    rev(445456);
    return 0;
}