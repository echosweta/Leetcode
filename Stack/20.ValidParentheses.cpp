class Solution {
public:
    bool isValid(string ans) {

        if(ans.length()<=1) return false;
        stack<char> st;

        for (int i = 0; i < ans.length(); i++) {
            // push opening bracket
            char s = ans[i];
            if (s == '{' || s == '[' || s == '(') {
                st.push(s);
            }

            else {
                if(!st.empty())
                {
                    if (ans[i] == '}' && st.top() == '{') {
                    st.pop();
                }

                else if (ans[i] == ')' && st.top() == '(') {
                    st.pop();
                } else if (ans[i] == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
                }
                else return false;
            }
        }
        if (st.empty())
            return true;

        return false;

    }
};
