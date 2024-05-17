class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0,m=0;
        vector <char> p={'a','e','i','o','u'};
        int i=0,j=0;
        while(j<k)
        {
            if(find(p.begin(),p.end(),s[j])!=p.end()) c++;
            j++;
        }
        m=max(c,m);
        if(find(p.begin(),p.end(),s[i])!=p.end()) c--;
        i++;
        while(j<s.length())
        {
            if(find(p.begin(),p.end(),s[j])!=p.end()) c++;
            m=max(m,c);
            if(find(p.begin(),p.end(),s[i])!=p.end()) c--;
            i++;
            j++;
        }
        return m;

    }
};