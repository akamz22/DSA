/*find Largest sum contiguous Subarray [V. IMP]*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    int n = 5;
    int arr[n] = {1 ,2, 3 ,-2 ,5};
    int sum = 0;
    int maxsum = arr[0];
    for (j = 0; j < n; j++)
    {
        sum = sum + arr[j];
        if (sum > maxsum)
        {
            maxsum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxsum;
    return 0;
}