class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int count = 0, mark = nums[0];
        for(const int& i: nums) {
            if(!count) { mark = i; count = 1; } 
            else if(!(mark^i)) count++;
            else count--;
        }
        return mark;
    }
};