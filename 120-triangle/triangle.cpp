class Solution {
public:
    int blue(vector<vector<int>>& t, vector <vector<int>> &dp, int i, int j, int n)
    {
        if(i==n-1) return t[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int d= t[i][j]+blue(t,dp,i+1,j,n);
        int dg= t[i][j]+blue(t,dp,i+1,j+1,n);
        return dp[i][j]= min(d,dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        if(m==1) return triangle[0][0];
        vector <vector <int>> dp(m,vector<int>(m,-1));
        blue(triangle,dp,0,0,m);
        return dp[0][0];
    }
};