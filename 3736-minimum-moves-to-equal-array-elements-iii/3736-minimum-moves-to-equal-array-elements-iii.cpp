class Solution {
public:
    int minMoves(vector<int>& nums) {

        int maxi = *max_element(nums.begin(), nums.end());
        int cnt = 0;

        for(auto val : nums){
            cnt += maxi - val;
        }
        return cnt;
    }
};