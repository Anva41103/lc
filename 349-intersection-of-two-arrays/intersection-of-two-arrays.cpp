class Solution {
public:
    bool isin(vector <int> a, int j)
    {
        int b=0;
        int e= a.size()-1;
        while (b<=e)
        {
            int m= (b+e)/2;
            if(a[m]==j) return true;
            if(a[m]>j)e=m-1;
            else b=m+1;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> p;
        set <int> s;
        for(int i=0;i<nums1.size();i++)
        {
            if(isin(nums2,nums1[i])) s.insert(nums1[i]);
        }
        for(auto it: s)
        {
            p.push_back(it);
        }
        return p;
    }
};