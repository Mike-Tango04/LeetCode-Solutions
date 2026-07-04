class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {

        unordered_map<int, int> mp;

        int val;

        for (auto x : nums) {
            mp[x]++;
        }

        int n = nums.size()/2;

        for (int i = 0; i <= n; ++i) {
            if (i == n) {
                val = nums[i];
            }
        }

        if(mp[val] == 1){
            return true;
        }
        return false;
    }
};