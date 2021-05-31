#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 9;
    int arr[n] = {1, 3, 5, 50, 50, 5, 52, 123, 8,9};
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == i)
        {
            cout << i << " ";
        }
    }
}
