class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map <int, int> m;
    int nf=0, n= arr.size();
    int l=0,r=0;
    while(r<n)
    {
        m[arr[r]]++;
        if(m.size()>2)
        {
            while(m.size()>2)
            {
                m[arr[l]]--;
                if(m[arr[l]]==0)
                {
                    m.erase(arr[l]);
                }
                l++;
            }
        }
        nf=max(nf, r-l+1);
        r++;
    }
    return nf;
    }
};