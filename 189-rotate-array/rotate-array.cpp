class Solution {
public:
    void rotate(vector<int>& arr, int k) 
    {
        int n= arr.size();
        if (n <=1)  return;
        if(k==0||k%n==0)
        return;
        k = k % n;
        int a[n];
        for(int i=n-k;i<n;i++)
        {
            a[i-n+k]=arr[i];
        }
        for(int i=k;i<n;i++)
        {
            a[i]=arr[i-k];
        }
        arr.clear();
        for(int i=0;i<n;i++)
        {
            arr.push_back(a[i]);
        }
    }
    
};