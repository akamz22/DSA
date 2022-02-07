class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int target)
    {
        vector<int> ans = {-1, -1};
        ans[0] = search(arr, target, true);
        ans[1] = search(arr, target, false);
        return ans;
    }
    int search(vector<int> arr, int target, bool isFirstIndex)
    {
        int start = 0;
        int end = arr.size();
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
                    end = mid - 1;
                }
                else
                    start = mid + 1;
            }
        }
        return ans;
    }
};