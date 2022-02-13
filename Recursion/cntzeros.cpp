#include <iostream>
using namespace std;
int count0(int n, int count)
{
    if (n < 10)
        return count;
    if (n % 10 == 0)
        return 1 + count0(n / 10, count);
    else
        return count0(n / 10, count);
}
int main()
{
    
    cout<<"Number of Zeros is : " <<count0(1200050,0)<<endl;
    return 0;
}