class Solution {
public:
    string makeGood(string s) {
        string h="";
         if (s.empty()) return ""; 
        stack <char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(!st.empty()&&abs(st.top()-s[i])==32) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()) 
        {
            h=st.top()+h;
            st.pop();
        }

        return h;
    }
};