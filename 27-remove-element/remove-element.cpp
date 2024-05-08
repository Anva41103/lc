#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int c = 0, d = 0;
    for (int i = 0; i < nums.size();) {
        if (nums[i] == val) {
            vector<int>::iterator it = nums.begin() + i;
            nums.erase(it);
            d++;
        } else {
            c++;
            i++;  // Move this line inside the 'else' block
        }
    }
    //for (int i = 0; i < d; i++) nums.push_back(val);
    return c;
    }
};