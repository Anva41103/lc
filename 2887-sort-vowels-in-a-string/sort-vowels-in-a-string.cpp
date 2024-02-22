class Solution {
public:
    //static bool comp(char x, char y)
    string sortVowels(string s) {
        vector <char> x={'a','e','i','o','u','A','E','I','O','U'};
        vector <int> v;
        for(int i=0;i<s.length();i++)
        {
            if(find(x.begin(),x.end(),s[i])!=x.end()) {
            v.push_back(s[i]);
            s[i]='_';}
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='_')
            {
                s[i]=(char) v[v.size()-1];
                v.pop_back();
            }
        }
        return s;
    }
};