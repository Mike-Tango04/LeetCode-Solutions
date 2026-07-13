class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;

        for (auto val : st) {

            if (st.find(val - 1) == st.end()) {

                int count = 1;
                int curr = val;

                while (st.find(curr + 1) != st.end()) {
                    count++;
                    curr++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};