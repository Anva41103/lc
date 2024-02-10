class Solution {
public:
    // int teddy(vector < vector<int>> & dp, vector<vector<int>>& m, int i, int j) {
    //     if (j < 0 || j >= m[0].size())
    //         return 1e9;
    //     if (i == 0)
    //         return dp[i][j] = m[i][j];
        
    //     if (dp[i][j] != -1)
    //         return dp[i][j];
    //     int u = m[i][j] + teddy(dp, m, i - 1, j);
    //     int rd = m[i][j] + teddy(dp, m, i - 1, j + 1);
    //     int ld = m[i][j] + teddy(dp, m, i - 1, j - 1);
    //     return dp[i][j] = min(u, min(ld, rd));
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int mini = INT_MAX;
        for(int j=0;j<n;j++)
        {
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int u = matrix[i][j] + dp[i - 1][j],rd=1e9,ld=1e9;
                if(j+1<n) rd = matrix[i][j] + dp[i - 1][j+1];
                if(j-1>=0) ld = matrix[i][j] +dp[i - 1][j-1];;
                dp[i][j] = min(u, min(ld, rd));
            }
        }
        for(int j=0;j<n;j++)
        {
            mini=min(mini,dp[m-1][j]);
        }
        return mini;
    }
};