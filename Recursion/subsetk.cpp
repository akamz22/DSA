#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> subset(vector<int> &arr)
{
    vector<vector<int>> ans;
    ans.push_back({});
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int sz = ans.size();
        for (int j = 0; j < sz; j++)
        {
            vector<int> res = ans[j];
            res.push_back(temp);
            for (auto it : res)
                cout << it << " ";
            cout << endl;
            ans.push_back(res);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subsets = subset(arr);
    // for (auto sub : subsets)
    // {
    //     for (auto ele : sub)
    //         cout << ele << " ";
    //     cout << endl;
    // }

    return 0;
}
