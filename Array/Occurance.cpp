#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5, n = 9;
    int arr[n] = {1, 3, 5, 50, 50, 51, 52, 5, 125};
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout <<"First occured at"<< i << " ";
            temp = i;
            break;
        }
    }
    int count = 0;
    for (int j = n; j > 0 && j != temp; j--)
    {
        if (arr[j] == x)
        {
            count = 1;
            if (count == 1)
                cout << "Last occured at"<<j << " ";
            break;
        }
    }
    if (count == 0)
    {
        cout << temp << " ";
    }
}
