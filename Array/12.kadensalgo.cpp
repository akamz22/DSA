#include <bits/stdc++.h>

int main()
{
    int n = 5, i;
    int arr[n] = {1, 2, 3, -2, 5};
    int sum = arr[0], maxsum = arr[0];
    for (i = 1; i < n; i++)
    {
        if (sum >= 0)
        {
            sum = sum + arr[i];
        }
        else
        {
            sum = arr[i];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    std::cout << maxsum;
}