class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a=INT_MIN,sum=0;
        int s=0,e=0;
        while(e<nums.size())
        {
            sum+=nums[e];
            if(e-s+1==k)
            {
                a=max(a,(sum/k));
                sum-=nums[s++];
            }
            e++;
        }
        return a;
    }
};