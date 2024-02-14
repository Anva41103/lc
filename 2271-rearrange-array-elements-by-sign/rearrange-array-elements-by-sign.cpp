class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> n;
        vector <int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) n.push_back(nums[i]); 
            else m.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<n.size();i++)
        {
            nums.push_back(m[i]);
            nums.push_back(n[i]);
        }
        return nums;
    }
};