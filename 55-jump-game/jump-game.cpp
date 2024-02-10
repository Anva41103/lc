class Solution {
public:
     vector<int> memo;
     public:
     bool canJump(vector<int>& nums) {
           int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=true;
        
        for(int i=1;i<n;i++){
             for(int j=i-1;j>=0;j--){
                 if(dp[j] && j+nums[j]>=i){
                     dp[i]=true;
                     break;
                 }       
             }           
        }
        return dp[n-1];
     }
     bool solve(int i,vector<int> nums){
        
        if(i==nums.size()-1) return true;
        if(memo[i]!=-1) return memo[i];
        int reachable=i+nums[i];
        
        for(int k=i+1;k<=reachable;k++){
             if(solve(k,nums)){
                return memo[i]=true;
             } 
        }
        return memo[i]=false;
    }
};