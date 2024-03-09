class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int j=pref[0];
        vector <int> pre(pref.size());
        pre[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            pre[i]=j^pref[i];
            j=pref[i];
        }
        return pre;
    }
};