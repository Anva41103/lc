class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string k="";
        int o=-1,z=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') o++;
            else z++;
        }
        for(int i=1;i<=o;i++) k+="1";
        for(int i=0;i<z;i++) k+="0";
        k+="1";
        return k;
    }
};