class Solution {
public:
    bool pallindrome (string k)
    {
        for(int i=0;i<=k.size()/2;i++)
        {
            if(k[i]!=k[k.size()-i-1]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it: words)
        {
            if(pallindrome (it)) return it;
        }
        return "";
    }
};