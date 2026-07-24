class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        vector<int> ans;

        for (auto val : nums) {
            mp[val] ++ ;

            if(mp[val] <= k){
                ans.push_back(val);
            }
        }

        return ans;
    }
};