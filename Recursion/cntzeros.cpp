#include <iostream>
using namespace std;
int count1(int n, int count)
{
    if (n < 10)
        return count;
    if (n % 10 == 0)
        return 1 + count1(n / 10, count);
    else
        return count1(n / 10, count);
}
int main()
{
    
    cout<<"Number of Zeros is : " <<count1(1200050,0)<<endl;
    return 0;
}