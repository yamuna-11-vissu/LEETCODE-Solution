class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() &&
                ((st.top() >= 'a' && st.top() <= 'z' &&
                  s[i] == toupper(st.top())) ||
                 (st.top() >= 'A' && st.top() <= 'Z' &&
                  s[i] == tolower(st.top())))) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        string ans = "";

        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};