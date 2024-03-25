class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        unordered_map <int, int> m;
        for(auto it:nums)
        {
            m[it]++;
            if(m[it]==2) v.push_back(it);
        }
        return v;
    }
};