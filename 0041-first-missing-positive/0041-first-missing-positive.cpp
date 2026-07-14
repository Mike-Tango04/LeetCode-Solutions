class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        int num = 0;

        for (int i = 0; i < nums.size(); ++i) {

            while (nums[i] >= 1 && nums[i] <= n) {

                int indx = nums[i] - 1;

                if (nums[indx] == nums[i]) {
                    break;
                }

                swap(nums[indx], nums[i]);
            }
        }

        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};