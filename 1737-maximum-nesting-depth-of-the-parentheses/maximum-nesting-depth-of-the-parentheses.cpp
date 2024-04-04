class Solution {
public:
    int maxDepth(string s) {
        int m = 0; // maximum depth
        int currentDepth = 0; // current depth
        std::stack<char> st; // stack to keep track of '('

        for (char ch : s) {
            if (ch == '(') {
                st.push('(');
                currentDepth = std::max(currentDepth, (int)st.size());
            } else if (ch == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    // Extra closing bracket, invalid parentheses sequence
                    return -1;
                }
            }
        }

        if (!st.empty()) {
            // Extra opening bracket, invalid parentheses sequence
            return -1;
        }

        return currentDepth;
    }
};