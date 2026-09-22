class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int ans = 0;
        int low = 0, high = nums.size() - 1;

        while(low < high){

            int mid = low + (high - low) / 2;

            if(nums[mid] < nums[mid + 1]){
                ans = mid + 1;
                low = mid + 1;
            }
            else if(nums[mid] > nums[mid + 1]){
                ans = mid;
                high = mid;
            }
        }

        return ans;
        
    }
};