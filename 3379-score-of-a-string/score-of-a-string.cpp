class Solution {
public:
    int scoreOfString(string s) {
        int h=0;

        for(int i=1;i<s.size();i++)
        {
            h+=abs(s[i]-s[i-1]);
        }
        return h;
    }
};