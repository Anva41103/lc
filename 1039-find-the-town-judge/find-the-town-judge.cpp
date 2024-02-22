class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map <int,int> m;
        unordered_map <int,int> p;
        for(int i=0;i<trust.size();i++)
        {
            m[trust[i][0]]++;
            p[trust[i][1]]++;
        }
        int h=-1;
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0&&p[i]==n-1) h=i;
        }
        return h;
    }
};