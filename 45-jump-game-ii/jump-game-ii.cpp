class Solution {
public:
    int rose(vector<int>& dp,vector<int>& nums, int i)
    {
        if(i==nums.size()-1) return dp[i]= 0;
    if(dp[i]!=-1) return dp[i];
    int j=nums[i];
    if(i+j>=nums.size()-1) return dp[i]=1;
    int m = INT_MAX - 1; // Initialize m with a value greater than maximum possible jumps
    for (int k = 1; k <= j; k++) {
        if (i + k >= nums.size()) break;
        int l = rose(dp, nums, k + i);
        if (l != INT_MAX) // Only update m if l is a valid number of jumps
            m = min(l + 1, m); // Increment l by 1 to account for the current jump
    }
    return dp[i] = m;
    }
    int jump(vector<int>& nums) {
        vector <int> dp(nums.size(),-1);
        return rose(dp, nums,0);
    }
};