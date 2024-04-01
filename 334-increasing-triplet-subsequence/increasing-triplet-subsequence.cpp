class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX;
        for(auto it: nums)
        {
            if(it<a) a=it;
            else if(it>a&&it<b) b= it;
            else if(it>b) return true;
        }
        return false;
    }
};