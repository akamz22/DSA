#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void permute(vector<int> nums,vector<vector<int>> &ans,int index)
{
     if(index>=nums.size())
     {   
         ans.push_back(nums);
         return;
     }
     for(int j = index;j<nums.size();j++)
     {
        swap(nums[index],nums[j]);
        permute(nums,ans,index+1);
     }
}
int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    permute(nums,ans,0);
    for(auto vec : ans)
    {
        for(auto ele : vec)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}