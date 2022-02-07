// Sum of digits
int sum(int n)
{
    if (n < 10)
        return n;
    return n % 10 + sum(n / 10);
}
#include <iostream>
using namespace std;
int main()
{
    cout << sum(123452);
    return 0;
}