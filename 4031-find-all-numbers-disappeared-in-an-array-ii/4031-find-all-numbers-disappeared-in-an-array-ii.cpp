class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {

        int start;

        vector<vector<int>> ans;

        unordered_set<int> st(nums.begin(), nums.end());

        for (int i = lower; i <= upper; i++) {

            if (st.find(i) == st.end()) {
                start = i;
                int temp = i;

                while (temp <= upper && st.find(temp) == st.end()) {
                    temp++;
                }

                ans.push_back({start, temp - 1});
                i = temp - 1;
            }
        }

        return ans;
    }
};