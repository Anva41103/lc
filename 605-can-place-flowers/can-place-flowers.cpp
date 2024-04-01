class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int j=0,a=0;
        if(f.size()==1&&f[0]==0||n==0) return 1;
        if(f.size()==1) return 0;
        for(int i=0;i<f.size()-1;i++)
        {
            if(n==0) return true;
            if(i==0) { if(f[i]==0&&f[i+1]==0) { f[i]=1; n--;}}
            else
            {
                if(f[i]==0&&f[i-1]==0&&f[i+1]==0) {f[i]=1; n--;}
            }
        }
        if(f[f.size()-2]==0&&f[f.size()-1]==0) n--;
        if(n<=0) return true;
        else return false;
    }
};