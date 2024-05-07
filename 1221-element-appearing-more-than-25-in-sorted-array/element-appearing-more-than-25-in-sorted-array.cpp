class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map <int,int> m;
        int n=arr.size()*0.25;
        //sort(arr.begin(), arr.end());
        for(auto it:arr)
        {
            m[it]++;
            if(m[it]>n) return it;
        }
        return 0;
    }
};