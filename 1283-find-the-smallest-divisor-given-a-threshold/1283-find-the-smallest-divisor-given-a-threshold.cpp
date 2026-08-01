class Solution {
public:
    bool minDivisor(const vector<int> &nums, int mid , int threshold){

        long long currSum = 0;

        for(int i = 0; i < nums.size(); ++i){
            currSum += (nums[i] + mid - 1)/ mid;
        }

        return currSum <= threshold;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {

        int minDiv = 0;
        int start = 1;
        int maxNum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {

            if (nums[i] > maxNum) {
                maxNum = nums[i];
            }
        }

        int end = maxNum;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            bool canDivide = minDivisor(nums, mid, threshold);

            if(canDivide) {
                minDiv = mid;
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return minDiv;
    }
};