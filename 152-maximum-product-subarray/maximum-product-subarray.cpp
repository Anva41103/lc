class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1,f=0;
        for(int i=0;i<nums.size();i++)
        {
            p=nums[i];
            f=max(f,p);
            for(int j=i+1;j<nums.size();j++)
            {
                p*=nums[j];
                f=max(f,p);
            }
        }
        if(nums.size()==1) return nums[0];
        return f;
    }
};