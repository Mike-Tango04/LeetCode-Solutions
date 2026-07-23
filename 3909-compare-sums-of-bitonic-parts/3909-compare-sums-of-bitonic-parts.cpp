class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {

        long long decSum = 0;

        // long long peak = 0;

        long long incSum = 0;

        int idx = 0;
 
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                // peak = nums[i];
                idx = i;
            }
        }

        for (int i = 0; i <= idx; i++) {

            incSum += nums[i];
        }

        for (int i = idx; i < nums.size(); i++) {

            decSum += nums[i];
        }

        if (decSum == incSum) {
            return -1;
        }

        else if (decSum > incSum) {
            return 1;
        }

        return 0;
    }
};