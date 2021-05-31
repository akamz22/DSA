// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0;

    // int n = 5;
    int arr1[] = {2, 4, 6, 8, 12, 15};
    int arr2[] = {5, 7, 9, 12, 15, 18};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int res[m + n];
    cout << m << " " << n << "\n";
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
            res[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            res[k++] = arr2[j++];
    }
    while (j < n)
        res[k++] = arr2[j++];

    while (i < m)
        res[k++] = arr1[i++];

    for (i = 0; i < m + n; i++)
        cout << res[i] << " ";
    return 0;
}