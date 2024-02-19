class Solution {
public:
    vector <int> lol(int n)
    {
        vector <int> v;
        v.push_back(1);
        long long k=1;
        for(int i=1;i<n;i++)
        {
            k*=(n-i);
            k/=i;
            v.push_back(k);
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(lol(i));
        }
        return ans;
    }
};