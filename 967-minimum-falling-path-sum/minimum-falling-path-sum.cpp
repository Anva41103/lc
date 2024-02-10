class Solution {
public:
    int f(int row,int col,int n,vector<vector<int>>& arr,vector<vector<int>>& dp){
        if(row<0||row==n||col<0||col==n) return 1e9;
        if(row==n-1) return arr[row][col];
        if(dp[row][col]!=101) return dp[row][col];
        return dp[row][col]=arr[row][col]+min(f(row+1,col,n,arr,dp),min(f(row+1,col+1,n,arr,dp),f(row+1,col-1,n,arr,dp)));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,101));
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int ans=f(0,i,n,matrix,dp);
            mini=min(mini,ans);
        }
        return mini;
    }
};