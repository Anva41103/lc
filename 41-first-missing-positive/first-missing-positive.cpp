class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int h=1;
        for(auto it: nums)
        {
            if(it==h) h++;
        }
        return h;
    }
};