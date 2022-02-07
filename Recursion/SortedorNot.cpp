#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> nums, int i, int n)
{
    if (i == n)
        return true;
    return nums[i] <= nums[i + 1] && isSorted(nums, i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << isSorted(nums, 0, n) << endl;
    return 0;
}