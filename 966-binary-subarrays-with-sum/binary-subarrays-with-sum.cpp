class Solution {
public:
int solve(vector<int>&nums,int goal){
    int i=0,j=0,n=nums.size(),ans=0,sum=0;
    while(j<n)
    {
        sum+=nums[j];
        while(sum>goal && i<=j)
        {
            sum-=nums[i];
            i++;
        }
        ans+=j-i-1;
        j++;

    }
    return ans;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal)-solve(nums,goal-1);
        // int n=nums.size();
       
        // int takevalue=0;
        // unordered_map<int,int>count;
        // count[0]=1;
        // int sum=0;
        // for(int num:nums){
        //     sum+=num;
        //     if(count.find(sum-goal)!=count.end()){
        //         takevalue+=count[sum-goal];
        //     }
        //     count[sum]++;
        // }
        // return takevalue;
        


    
        // for(int i=0;i<n;i++)
        // {
        //     sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==goal) count++;
        //         else if(sum>goal) break;
        //     } 
        // }


        
    }
};