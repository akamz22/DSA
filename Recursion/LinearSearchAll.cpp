#include <iostream>
#include <vector>
using namespace std;
vector<int> linearSearch(vector<int> ans, vector<int> nums, int i, int target, int n)
{
    if (i == n)
        return ans;
    if (nums[i] == target)
    {
        ans.push_back(i);
    }
    return linearSearch(ans, nums, i + 1, target, n);
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
    vector<int> ans;
    vector<int>  as = linearSearch(ans, nums, 0, 2, n);
    cout<<"Index value is : ";
    for (int i = 0; i < as.size(); i++)
    {
        cout << as[i]<<" ";
    }
    return 0;
}