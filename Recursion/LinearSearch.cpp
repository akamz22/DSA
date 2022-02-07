#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> nums, int i, int target, int n)
{

    if (i > n)
        return -1;
    if (nums[i] == target)
    {
        return i;
    }
    return linearSearch(nums, i + 1, target, n);
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter target : " << endl;
    cin >> target;
    int ans = linearSearch(nums, 0, target, n);
    cout <<"Element found at position : " <<ans;

    return 0;
}