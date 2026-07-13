class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        unordered_map<int, int> mp;

        for (auto val : nums)
            mp[val]++;

        for (auto x : nums) {
            if (mp[x] > n / 3) {
                ans.push_back(x);
                mp.erase(x);
            }
        }

        return ans;
    }
};