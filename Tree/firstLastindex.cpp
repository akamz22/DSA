#include <iostream>
#include <vector>
using namespace std;
int Binary_Search(vector<int> arr, int target)
{
    vector<int> ans = {-1, -1};
    ans[0] = search(arr, target, true);
    ans[1] = search(arr, target, false);
    return ans[0], ans[1];
}
int search(vector<int> arr, int target, bool isFirstIndex)
{
    int start = 0;
    int end = 7;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            ans = mid;
            if (isFirstIndex)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{2, 3, 5, 9, 14, 16, 18};
    int target = 18;
    int ans = Binary_Search(arr, target);
    cout << ans;
    return 0;
}