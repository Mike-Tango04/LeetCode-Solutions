class Solution {
public:
    void rotateVector(vector<int> &nums, int start, int end) {

        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n;

        rotateVector(nums, 0, n - 1);
        rotateVector(nums, 0, k - 1);
        rotateVector(nums, k, n - 1);
    }
};