class Solution {
public:
    string reverseWords(string s) 
    {
        vector <string> v;
        string k="";
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==' ')
           {
               if(k!="") v.push_back(k);
               k=""; 
           }
           else
           {
               k+=s[i];
           }
       }
       if(k!="") v.push_back(k);
       k="";
       reverse(v.begin(),v.end());
       for(int i=0;i<v.size();i++)k+=v[i]+" ";
       k.pop_back();
       
       return k;
    }
};