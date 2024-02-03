#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int l= nums.size();
        vector <int> v;
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(nums[j]==target-nums[i]) { v.push_back(i); v.push_back(j); break;}
            }
        }
        return v;
    }
};