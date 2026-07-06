class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, int> mp = {{'[', -1}, {'(', -2}, {'{', -3},
                                       {']', 1},  {')', 2},  {'}', 3}};

        stack<char> st;

        for (auto bracket : s) {

            if (mp[bracket] < 0) {
                st.push(bracket);
            } else {
                if (st.empty())
                    return false;
                else {
                    char top = st.top();

                    if (mp[top] + mp[bracket] != 0)
                        return false;
                    st.pop();
                }
            }
        }

        if (st.empty())
            return true;

        return false;
    }
};