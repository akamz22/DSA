//Selection sort..........
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 16, i, temp, j, imin;
    int arr[n] = {6, 7, 8, 3, 4, 7,45,12,36,78,89,81,55,22,28,91};
    for (i = 0; i < n - 1; i++)
    {
        imin = i;
        for (j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[imin])
                imin = j;
        }
        temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}