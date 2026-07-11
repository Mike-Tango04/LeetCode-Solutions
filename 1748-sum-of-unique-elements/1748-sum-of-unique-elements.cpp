class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int, int> mp;

        int sum = 0;

        for (auto val : nums) {

            mp[val]++;
        }

        for (auto val : nums) {

            if (mp[val] <= 1) {
                sum += val;
            }
        }

        return sum;
    }
};