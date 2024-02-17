class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int, int> hmap;
      vector<int> result;
      int n = nums.size();

      int minCount = (n / 3) + 1;

      for(int i=0; i < n; i++){
          hmap[nums[i]]++;

          if(hmap[nums[i]] == minCount){
              result.push_back(nums[i]);
          }

      }

      return result;
    }
};