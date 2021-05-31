//Reverse an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {6, 7, 8, 3, 4, 8};
    int start = 0, end = 6 - 1, i;
    for (i = 0; i <= end; i++)
    {
        if (i != end)
        {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
        }
    }

    for (i = 0; i < 6; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}