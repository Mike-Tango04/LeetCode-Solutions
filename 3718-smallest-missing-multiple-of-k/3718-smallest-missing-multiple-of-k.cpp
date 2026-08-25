class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> st;

        for (auto val : nums)
            st.insert(val);

        int ans = 1;

        while (true) {
            int num = ans * k;
            if (st.find(num) == st.end()) return num;
            ans++;
        }

        return -1;
    }
};