#include <iostream>
using namespace std;
bool prime(int n, int i=2)
{
    if (i == n-1)
        return true;
    if (n % i == 0)
        return false;
    return prime(n, i+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    return 0;
}