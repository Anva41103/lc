class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,p=k;
        map <int,int> m;
        while(r<nums.size())
        {
            if(nums[r]==0)
                p--;
                if(p<0)
                {
                    if(nums[l]==0) p++;
                    l++;
                }
            r++;
        }
        return r-l;
    }
};