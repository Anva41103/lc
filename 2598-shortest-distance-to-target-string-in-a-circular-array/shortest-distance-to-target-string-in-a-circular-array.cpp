class Solution {
public:
    int closetTarget(vector<string>& w, string t, int sI) {
         int i = sI + 1;
        if (find(w.begin(), w.end(), t) == w.end()) return -1;
        int m = INT_MAX;
        int n = w.size();
       for(int i=0;i<n;i++)
       {
           //if(i==sI) continue;
           if(w[i]==t)
           {
               int a= abs(sI-i);
               int b=n-a;
               m= min(a,min(b,m));
           }
       }
        return m;
    }
};