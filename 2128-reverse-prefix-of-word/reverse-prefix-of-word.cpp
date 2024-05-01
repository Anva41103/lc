class Solution {
public:
    string reversePrefix(string word, char ch) {
        string j="";
        int f=0;
        for(auto it: word)
        {
            if(f==0) j=it+j;
            else j+=it;
            if(it==ch) f++;
        }
        if(f==0) return word;
        return j;
    }
};