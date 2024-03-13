class Solution {
public:
    int pivotInteger(int n) {
        int p=n*(n+1)/2;
        int s=0;
        for(int i=1;i<=n;i++)
        {
            s+=i;  
            if(s==(p-s+i))return i;
        }
        return -1;
    }
};