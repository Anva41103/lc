class Solution {
public:
    bool comparator (string a, string b)
    {
        if(a.length()<=b.length()) return true;
        else return false;
    }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string k="";
        char x;
        for(int i=0;i<strs[0].size();i++)
        {
            x=strs[0][i];
            int j=1;
            while(j<strs.size())
            {
                if(strs[j++][i]!=x) return k; 
            }
            k+=x;   
        }
        return k;
    }
};