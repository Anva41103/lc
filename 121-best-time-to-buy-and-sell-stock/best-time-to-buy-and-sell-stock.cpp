#include <limits>
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
     int s= prices.size();
     int p=0;
     int c= INT_MAX;
     for(int i=0;i<s;i++)
     {
        if(prices[i]<c) c=prices[i];
        if((prices[i]-c)>p) p= prices[i]-c;
    }
     return p;
    }
};