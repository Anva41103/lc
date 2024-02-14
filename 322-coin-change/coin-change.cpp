class Solution {
public:
    int lol(vector<int>& c, int am, int ind, vector <vector <int>> &dp)
    {
        if(ind==0)
        {
            if(am%c[ind]==0) return am/c[ind];
            else return 1e7;
        }
        if(dp[ind][am]!=-1) return dp[ind][am];
        int nottake= lol(c,am,ind-1,dp);
        int take=1e7;
        if(c[ind]<=am)
        {
            take= 1+lol(c,am-c[ind],ind,dp);
        }
        return dp[ind][am]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector <vector <int>> dp(n, vector <int> (amount+1,-1));
        int r=lol(coins,amount,n-1,dp);
        if(r>=1e7) return -1;
        else return r;
    }
};