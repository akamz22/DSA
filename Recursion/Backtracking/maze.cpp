#include <iostream>
using namespace std;
int count(int r, int c)
{
    if (r == 1 || c == 1)
    {  
        return 1;
    }
    return count(r - 1, c) + count(r, c - 1);
}
int main()
{
    int r,c;
    cin>>r>>c;
    cout<<count(r,c)<<endl;
    return 0;
}