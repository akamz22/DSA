#include <iostream>
#include<vector>
using namespace std;

// int deldup(){

// }

int main()
{
    vector<int> a;
    //vector<int>::iterator it;

    for (int i = 0; i < 6; i++)
    {
        a.push_back(i * 3);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}