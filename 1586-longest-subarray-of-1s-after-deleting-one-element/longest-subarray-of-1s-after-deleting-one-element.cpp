class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,c=0,m=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0) c+=1;
            while(c>1)
            {
                if(nums[i]==0) c-=1;
                i++;
            }
            m=max(m,j-i);
        }
        return m;
    }
};