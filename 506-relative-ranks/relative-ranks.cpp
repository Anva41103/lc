class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector <string> v;
        vector <int> f=score;
        unordered_map <int,int> m;
        sort(f.begin(),f.end(), greater <int>());
        for(int i=0;i<f.size();i++)
        {
            m[f[i]]=i+1;
        }
        for(auto it: score)
        {
            if(m[it]==1) v.push_back("Gold Medal");
            else if(m[it]==2) v.push_back("Silver Medal");
            else if(m[it]==3) v.push_back("Bronze Medal");
            else v.push_back(to_string(m[it]));
        } 
        return v;
    }
};