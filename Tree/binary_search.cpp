#include <iostream>
using namespace std;
int Binary_Search(int arr[], int target)
{
    int start = 0;
    int end = 7;
    while (start <= end)
    {   
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int arr[7] = {2, 3, 5, 9, 14, 16, 18};
    int target = 18;
    int ans = Binary_Search(arr, target);
    cout << ans;
    return 0;
}