class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        int positive = 0;
        int negative = 1;

        for (auto val : nums) {

            if (val >= 1) {

                ans[positive] = val;
                positive += 2;

            }

            else {
                ans[negative] = val;
                negative += 2;
            }
        }

        return ans;
    }
};