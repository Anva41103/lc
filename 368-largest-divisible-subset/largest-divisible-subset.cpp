class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector <int> ans;
        sort(nums.begin(),nums.end());
        int n= nums.size(),maxi=1,f=-1;
        vector <int> dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(!(nums[i]%nums[j])&&dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    if(maxi<dp[i]) maxi=dp[i];
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(maxi==dp[i]&&(f==-1||!(f%nums[i])))
            {
                ans.push_back(nums[i]);
                maxi--;
                f=nums[i];
            }
        }
        return ans;
    }
};