class NumArray {
    vector<int> nums;

public:
    NumArray(vector<int>& input) {

        nums = input;

        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {

        int ans = 0;

        if (left == 0) {
            ans = nums[right];
        } else
            ans = nums[right] - nums[left - 1];

        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */