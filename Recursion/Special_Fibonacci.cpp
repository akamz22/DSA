#include <iostream>
using namespace std;
int fib(int a, int b, int n)
{
    if (n % 3 == 0)
        return a;
    if (n % 3 == 1)
        return b;
    return a ^ b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        long long ans = fib(a, b, n);
        cout << ans << endl;
    }
    return 0;
}