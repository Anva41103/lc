class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector <bool> v;
        auto l= max_element(candies.begin(), candies.end());
        int j=*l;
        for(auto it: candies)
        {
            if(it+e>=j) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};