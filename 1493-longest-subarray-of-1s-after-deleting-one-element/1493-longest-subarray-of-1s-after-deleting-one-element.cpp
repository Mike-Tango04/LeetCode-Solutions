class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();
        int left = 0;
        int zeroCnt = 1;
        int maxLen = 0;

        for(int right = 0; right < n; right ++){

            if(nums[right] == 0) zeroCnt --;

            while(zeroCnt < 0){

                if(nums[left] == 0) zeroCnt++ ;
                left ++ ;
            }

            maxLen = max(maxLen , right - left);

        }

        return maxLen;
        
    }
};
