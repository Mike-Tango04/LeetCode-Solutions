class Solution {
public:
    int minDeletions(string s) {

        sort(s.begin(), s.end());

        unordered_set<int> st;

        int cnt = 1;
        int del = 0;

        for (int i = 1; i < s.size(); i++) {

            if (s[i] != s[i - 1]) {

                if (st.find(cnt) != st.end()) {

                    while (st.find(cnt) != st.end() && cnt != 0) {
                        cnt--;
                        del++;
                    }
                    st.insert(cnt);
                    cnt = 1;
                } else {
                    st.insert(cnt);
                    cnt = 1;
                }
            } else
                cnt++;
        }

        if (st.find(cnt) != st.end()) {

            while (st.find(cnt) != st.end() && cnt != 0) {
                cnt--;
                del++;
            }
            st.insert(cnt);
            cnt = 1;
        }
         else
            st.insert(cnt);

        return del;
    }
};