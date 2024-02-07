class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // if both have different size 
        if(s.size()!=goal.size()) return false; 

        //---PART_1-------------------------------------------------------//
        string str1= s;
        string str2 = goal;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1 != str2) return false;

        //---PART_2------------------------------------------------------//
        int flag=0;
        for(int i =0; i<str1.size()-1;i++)
        {
            if(str1[i]==str1[i+1])
            {
                flag=1;
                break;
            }
        }

        //---PART3-------------------------------------------------------//
        int cnt=0;
        for(int i =0 ; i < s.size();i++)
        {
            if(s[i]!=goal[i])cnt++;
            if(cnt>2) return false;
        }

        //---FINAL_CHECK----------------------------------------------------//
        if(cnt==0 && flag==0) return false;

        return true;
    }
};