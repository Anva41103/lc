class Solution {
public:
     int lol(vector<int>& c, int am, int ind, vector <vector <int>> &dp)
    {
        if(ind==0)
        {
            if(am%c[ind]==0) return 1;
            else return 0;
        }
        if(dp[ind][am]!=-1) return dp[ind][am];
        int nottake= lol(c,am,ind-1,dp);
        int take=0;
        if(c[ind]<=am)
        {
            take= lol(c,am-c[ind],ind,dp);
        }
        return dp[ind][am]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector <vector <int>> dp(n, vector <int> (amount+1,-1));
        int r=lol(coins,amount,n-1,dp);
        return r;
    }
};