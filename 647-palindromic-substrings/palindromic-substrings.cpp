class Solution {
public:
        int n;
    int f(int l, int r, string& s){
        if (0>l || r>=n || s[l]!=s[r]) return 0;
        else return 1+f(l-1, r+1, s);
    }
    int countSubstrings(string& s) {
        n=s.size();
        int N=2*n, ans=0;
        for(int i=0; i<N; i++)
            ans+=f(i/2, i/2+(i&1), s);
        return ans;
    }
};