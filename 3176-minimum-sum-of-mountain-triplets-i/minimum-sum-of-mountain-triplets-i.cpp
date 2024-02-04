class Solution {
public:
    int minimumSum(vector<int>& nums) 
    {
    int s = INT_MAX;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            if (nums[j] > nums[i]) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[k] < nums[j]) {
                        s = min(nums[i] + nums[j] + nums[k], s);
                    }
                }
            }
        }
    }

    if (s==INT_MAX) {
        return -1;
    } else {
        return s;
    }
    }
};