class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        int totalUnique = 0;
        int cnt = 0;

        unordered_map<int, int> mp;

        for (auto key : nums) {

            if (mp.find(key) == mp.end()) {
                totalUnique++;
            }
            mp[key]++;
        }

        for(int i = 0; i < nums.size(); i++){

            unordered_set<int> st;

            for(int j = i; j < nums.size(); j++){

                st.insert(nums[j]);

                if(st.size() == totalUnique) cnt++ ;

            }
        }
        return cnt;
    }
};