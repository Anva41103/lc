class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,f=0,p=0;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]<=2) { nums[j++]=nums[i]; p++;}
        }
        return p;
    }
};