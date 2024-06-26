class Solution {
public:
    /*bool co(vector <char> v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!='(') return false;
        }
        return true;
    }*/
    int no(char x, vector<char> a) {
        int c = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == x)
                c++;
        }
        return c;
    }
    bool checkValidString(string s) {
        stack<int>st; //storing index of  '(' 
        stack<int>st_1; //storing index of  '*' 
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                st.push(i);
        
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else if(!st_1.empty()){
                    st_1.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st_1.push(i);
            }
            i++;
        }
        if(st.empty()){
        return true;
        }
        else {  //this  else condition is important 
           
            while(!st.empty() && !st_1.empty()){
                if(st.top()<st_1.top()){
                    st.pop();
                    st_1.pop();
                }
                else{
                    return false;
                }

            }
            if(st.empty()){
                return true;
            }
        }
        return false;
    }

};