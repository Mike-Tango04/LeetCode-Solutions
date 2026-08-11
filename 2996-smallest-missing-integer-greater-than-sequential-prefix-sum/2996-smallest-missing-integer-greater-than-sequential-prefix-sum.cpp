class Solution {
public:
    int missingInteger(vector<int>& nums) {

        unordered_map<int, int> mp;

        int n = nums.size();

        for (auto val : nums) {
            mp[val]++;
        }

        int sum = nums[0];

        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        // while (mp.count(sum)) {
        //     sum++;
        // }

        while(mp.find(sum) != mp.end()){
            sum++ ;
        }

        return sum;;
    }
};