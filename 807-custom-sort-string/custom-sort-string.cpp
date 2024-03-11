class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map <char,int> m;
        for(auto it:s) m[it]++;
        string k="";
        for(auto it:order)
        {
            while(m[it]!=0)
            {
                k+=it;
                m[it]--;
            }
        }
        for(auto it:s)
        {
             while(m[it]!=0)
            {
                k+=it;
                m[it]--;
            }
        }
        return k;
    }
};