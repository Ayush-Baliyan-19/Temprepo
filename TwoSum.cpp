#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j)
        {
            cout<<nums[i];
            if(nums[i]+nums[j]==target)
            {
                return {i,j};
            }
            else if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else if(nums[i]+nums[j]<target)
            {
                i++;
            }
        }
        return {};
}

int main()
{
    vector<int> vec={2,7,11,5};  
    vector ans= twoSum(vec,20);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}