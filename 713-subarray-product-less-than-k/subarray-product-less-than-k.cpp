class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int t=0;
        int n= nums.size();
        for(int i=0;i<n-1;i++)
        {
            long long p=nums[i];
            if(p<k) t++;
            for(int j=i+1;j<n;j++)
            {
                if(p>k) break;
                p*=nums[j];
                if(p<k) t++;
            }
        }
        if(nums[n-1]<k)t++;
        return t;
    }
};