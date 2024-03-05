class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            break;
            char x=s[i];
            while(s[i]==x&&i<s.length()) i++;
            while(s[j]==x&&j>i) j--; 
        }
        if(i>j) return 0;
        else return j-i+1;
    }
};