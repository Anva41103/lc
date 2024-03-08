class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int ans=0;
        while(pq.top()<k)
        {
            long long a=pq.top();
            pq.pop();
            if(!pq.empty())
            {
                long long b=pq.top();
                pq.pop();
                if(b>=k)
                {
                    return ans+1;
                }
                else
                {
                    long long ele=a*2+b;
                    pq.push(ele);
                }
            }
            ans++;
        }
        return ans;
    }
};