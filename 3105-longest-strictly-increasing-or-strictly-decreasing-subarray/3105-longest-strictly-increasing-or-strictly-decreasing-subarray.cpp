class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int cnt1 = 1, cnt2 = 1, maxi = 1, maxd = 1;

        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] > nums[i - 1]){
                maxi = max(maxi, ++cnt1);
            }
            else cnt1 = 1;

            if(nums[i] < nums[i - 1]){
                maxd = max(maxd, ++cnt2);
            }
            else cnt2 = 1;
        }

        return max(maxi, maxd);
    }
};