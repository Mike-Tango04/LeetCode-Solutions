class Solution {
public:
    int maximumGap(vector<int>& nums) {

        if(nums.size() == 1){
            return 0;
        }

        int maxDiff = 0;
        int ans = 0;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){

            maxDiff = nums[i] - nums[i-1];

            ans = max(maxDiff, ans);
        }

        return ans;
        
    }
};