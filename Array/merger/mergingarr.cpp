#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int i = 0, j = 0, k = 0;
    int m = 6;
    int arr1[m] = {2, 4, 6, 8, 12, 15};
    int n = 5;
    int arr2[n] = {5, 7, 14, 16, 18};
    int res[m + n];
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            res[k++] = arr1[i++];
        }
        else if (arr2[j] < arr1[i])
            res[k++] = arr2[j++];
    }
    while (j < n)
    {
        res[k++] = arr2[j++];
    }
    while (i < m)
    {
        res[k++] = arr1[i++];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}