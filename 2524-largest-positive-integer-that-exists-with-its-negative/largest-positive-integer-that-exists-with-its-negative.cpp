class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map <int,int> mp;
        int k=-1;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[-1*it]>0) k=max(k,abs(it));
        }
        return k;
    }
};