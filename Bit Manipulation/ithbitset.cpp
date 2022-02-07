#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x = 4;
    int i = 0;
    //int k = (pow(2, i));
    int k=1<<i;
    int z = x & k;
    if (z == 0)
    {
        cout << "True";
    }
    else
        cout << "False";
    return 0;
}