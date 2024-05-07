class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        int c=0;
        for(auto it:nums)
        {
            int p=k-it;
            if(m[p]>0)
            {
                c++;
                m[p]--;
            }
            else m[it]++;
        }
        return c;
    }
};