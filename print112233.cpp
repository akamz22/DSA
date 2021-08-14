#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;

    int count = 0;
    int i = 1;
    string stri = to_string(num);
    int j=1;
    for (int i = 0; i < stri.length(); i++)
    {
       if (stri[i]==stri[j])
       {
           count++;
       }
       j++;
    }
    if(count==(stri.length()-1))
    {
        
    }
    

    return 0;
}