#include<iostream>
using namespace std;
int product(int n)
{
    if(n == 1)
    return n;
    return n * product(n-1);
}
int main(){
int ans = product(5);
cout<<ans<<endl;
return 0;
}