class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size() == 1) return 1;

        int n = nums.size();

        int lowIdx = 0;
        int highIdx = 0;
        int low = INT_MAX;
        int high = INT_MIN;

        for(int i = 0; i < n; i++){

            if(nums[i] > high){
                high = nums[i];
                highIdx = i;
            }

            if(nums[i] < low){
                low = nums[i];
                lowIdx = i;
            }
        }

        lowIdx++;
        highIdx++;

        return min({
            max(lowIdx, highIdx),
            n - min(lowIdx, highIdx) + 1,
            min(lowIdx, highIdx) + n - max(lowIdx, highIdx) + 1
        });
    }
};