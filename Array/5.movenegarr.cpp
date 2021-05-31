//Move all the negative elements to one side of the array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    int n = 9;
    int arr[n] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j]<0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}