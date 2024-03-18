class Solution {
public:
    static bool comp(vector <int> a, vector <int> b)
    {
        return a[0]<b[0];
    }
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(), comp);
        int a=1;
        int e=p[0][1];
        for(int i=1;i<p.size();i++)
        {
            if(p[i][0]>e)
            {
                a++;
                e=p[i][1];
            }
            else e=min(e,p[i][1]);
        }
        return a;
    }
};