class Solution {
public:
bool lol(int n,int target, vector <vector <int>> &dp,vector<int> &arr)
{
    if(target==0) return true;
    if(n==0) 
    {
        return arr[n]==target;
    }
    if(dp[n][target]!=-1) return dp[n][target];
    bool nottake=lol(n-1,target,dp,arr);
    bool take= false;
    if(arr[n]<=target)
    {
        take=lol(n-1,target-arr[n],dp,arr);
    }
    return dp[n][target]=take||nottake;
}
    bool canPartition(vector<int>& arr) {
        int s=0;
        int n=arr.size();
	for(int i=0;i<n;i++) s+=arr[i];
	int k=0;
	if(s%2!=0) return false;
	else k=s/2;
    vector <vector<int>> dp(n, vector <int>(k+1,-1));
    return lol(n-1,k,dp,arr);
    }
};