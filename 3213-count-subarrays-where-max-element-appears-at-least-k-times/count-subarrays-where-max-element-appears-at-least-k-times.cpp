class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int j=-1;
        for(auto it:nums)
        {
            if(j<it) j= it;
        }
        int r=0,l=0,count=0;
        long long len=0;
        while(r<nums.size())
        {
             if(nums[r] == j)count++;
            
            while(count>=k){
                if(nums[l]==j)count--;
                l++;
                len += nums.size()-r;
            }    
            r++;
        }
        return len;
    }
};