class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int b = 0;
    int e = nums.size() - 1; // Corrected end index
    int m;

    while (b < e) {
        m = b + (e - b) / 2; // Calculate mid index to avoid overflow

        if (nums[m] != nums[m - 1] && nums[m] != nums[m + 1])
            return nums[m];

        if (m % 2 == 0) {
            if (nums[m] == nums[m + 1])
                b = m + 2; // Move b to the next odd index
            else
                e = m; // Update e to exclude current and subsequent elements
        } else {
            if (nums[m] == nums[m - 1])
                b = m + 1; // Move b to the next even index
            else
                e = m - 1; // Update e to exclude current and subsequent elements
        }
    }
    return nums[b];
    }
};