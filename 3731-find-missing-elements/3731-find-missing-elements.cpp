class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;
        unordered_set<int>st;

        for(auto val : nums){
            st.insert(val);
        }

        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());

       for(int i = low ; i <= high; i++){

        if(st.find(i) == st.end()){
            ans.push_back(i);
        }
       }

        return ans;
        
    }
};