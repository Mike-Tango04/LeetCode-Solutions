class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        // Solved using two Ways one was brute Force so this is Optimization :-

        unordered_set<int> st(nums.begin(), nums.end());
        int allUnique = st.size();

        unordered_map<int, int> mp;

        int cnt = 0, left = 0;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++ ;

            while(mp.size() == allUnique){
                cnt += nums.size() - i;
                mp[nums[left]]--;
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]);
                }
                left++ ;
            }
        }

        return cnt;

        /*  // Unoptimized Variant ->

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

        */
    }
};