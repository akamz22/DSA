#include<iostream>
using namespace std;
int sum(int n)
{
    if(n == 1)
    return n;
    return n + sum(n-1);
}
int main(){
int ans = sum(5);
cout<<ans<<endl;
return 0;
}