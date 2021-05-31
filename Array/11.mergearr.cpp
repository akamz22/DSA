//Merge 2 sorted arraarr1s without using Earr1tra space.
#include<bits/stdc++.h>
#include<stdio.h>   
using namespace std;
int main()
{
    int i, j;
    int arr1[6] = {3, 5, 6, 7, 9, 10};
    int arr2[4] = {1, 2, 4, 8};
    int arr3[10] = {0};
    j = 0;
    for (int i = 0; i < 6; i++)
    {
        // compare the current element of `arr1[]` with the first element of `arr1[]`
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];

            // move `arr1[0]` to its correct position to maintain the sorted
            // order of `arr1[]`. Note: `arr1[1…n-1]` is alreadarr1 sorted
            int k;
            for (k = 1; k < 4 && arr2[k] < first; k++)
            {
                arr2[k - 1] = arr2[k];
            }

            arr2[k - 1] = first;
        }
    }
    // int n = sizeof(arr3) / sizeof(arr3[0]);
    // sort(arr3, arr3 + n);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr2[i]);
    }
}