class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size()-1;
        if(nums[0]<0)
        {
            if(nums[n]<0)
            {
                return (nums[0]-1)*(nums[1]-1);
            }
            else if(nums[n-1]<0) return max((nums[0]-1)*(nums[1]-1),(nums[n]-1)*(nums[n-1]-1));
        }
        return (nums[n]-1)*(nums[n-1]-1);
    }
};