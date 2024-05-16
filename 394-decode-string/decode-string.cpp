class Solution {
public:
    string dec(string h, int a)
    {
        string j="";
        for(int i=0;i<a;i++) j+=h;
        return j;
    }
    string decodeString(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ']') {
                st.push(s[i]);
            } else {
                // Step 1: Retrieve the string to be repeated
                string decodedString = "";
                while (!st.empty() && st.top() != '[') {
                    decodedString = st.top() + decodedString;
                    st.pop();
                }
                st.pop(); // Remove the '['

                // Step 2: Retrieve the number k
                string kStr = "";
                while (!st.empty() && isdigit(st.top())) {
                    kStr = st.top() + kStr;
                    st.pop();
                }
                int k = stoi(kStr);

                // Step 3: Repeat the decoded string k times
                string repeatedString = "";
                for (int j = 0; j < k; ++j) {
                    repeatedString += decodedString;
                }

                // Step 4: Push the repeated string back to stack
                for (char ch : repeatedString) {
                    st.push(ch);
                }
            }
        }

        // Build the final decoded string
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};