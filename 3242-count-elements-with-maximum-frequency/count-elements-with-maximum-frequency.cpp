class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map <int,int> m;
         int max=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>max)max= m[nums[i]];
        }
       int c=0;
        for(auto it:m)
        {
            if(it.second==max) c+=max;
        }
        return c;
    }
};