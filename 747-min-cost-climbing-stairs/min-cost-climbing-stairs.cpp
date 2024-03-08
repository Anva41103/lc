class Solution {
public:
   // int fun(vector <int> &dp,vector<int>& cost, int i )
    // {
    //     // if(i==0||i==1) return dp[i]=cost[i];
    //     // if(dp[i]!=-1) return dp[i];
    //     // int a= cost[i]+fun(dp,cost,i-1);
    //     // int b=fun(dp,cost,i-1);
    //     // int c=cost[i]+fun(dp,cost,i-2);
    //     // return dp[i]=min(a,min(b,c));
    //     if(i==cost.size()) return dp[i]= 0;
    //     for(int i=n-1;i>=0;i--)
    //     dp[i]=cost[i]+min(dp[i+1],dp[i+2]);

    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector <int> dp(n+1,-1);
        dp[n]=0;
        dp[n-1]=cost[n-1];
        for(int i=n-2;i>=0;i--)
        dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        return min(dp[0],dp[1]);
    }
};