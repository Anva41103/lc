class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map <int,int> m;
        int c=0;
        set <vector <int>> s;
        for(auto it:nums)
        {
            //int h=k+it;
            int j= it-k;
            //(m[h]>0) c++;
            if(m[j]>0) { s.insert({it,j});}
            m[it]++;
        }
        return s.size();
    }
};