class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {

        int maxLeft = nums[0];
        int j = k;
        int maxSum = maxLeft + nums[j];
        j++;

        int n = nums.size();

        while (j < n) {

            maxLeft = max(maxLeft, nums[j - k]);

            maxSum = max(maxSum, maxLeft + nums[j]);

            j++;
        }

        return maxSum;
    }
};