class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        unordered_map <int, int>mp;

        vector<int> ans;

        for(auto digit : friends){
            mp[digit] ++ ;
        }

        for(auto num : order){
            if(mp.find(num) != mp.end()){
                ans.push_back(num);
            }
        }

        return ans;
        
    }
};