class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        vector<int>v(2);

        for(int i = 0; i < nums.size(); i++){

            if(mp.find(target - nums[i]) != mp.end()){
                v[0] = i;
                v[1] = mp[target - nums[i]];
            }
            mp[nums[i]] = i;
        }
        return v; 
    }
};