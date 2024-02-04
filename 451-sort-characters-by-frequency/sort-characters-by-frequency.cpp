class Solution {
public:
    static bool comp(pair<char,int> a, pair <char,int> b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        map <char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        vector <pair <char,int>> v;
        for(auto it:m)
        {
            v.push_back(it);
        }
        string h="";
        sort(v.begin(),v.end(),comp);
        for(auto it: v)
        {
            while(it.second--)
            {
                h+=it.first;
            }
        }
        return h;
    }
};