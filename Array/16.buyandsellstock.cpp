//Buy and sell stock
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = INT16_MIN;
    int min = INT16_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // //<My solution?..................................................................
    // int a = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //         a = i;
    //     }
    // }
    // int maxprofit = 0;
    // if (min == arr[n - 2])
    // {
    //     maxprofit = 0;
    // }
    // else
    // {
    //     for (int k = a; k < n - 1; k++)
    //     {
    //         if (arr[k] > min && arr[k] > max)
    //         {
    //             max = arr[k];
    //         }
    //     }
    //     maxprofit = max - min;
    // }
    int maxprofit = 0;
    int minsofar = arr[0];
    for (int i = 0; i < n; i++)
    {
        minsofar = std::min(minsofar, arr[i]);
        int profit = arr[i] - minsofar;
        maxprofit = std::max(maxprofit,profit);
    }
    cout <<"Max profit is : "<< maxprofit;
    return 0;
}