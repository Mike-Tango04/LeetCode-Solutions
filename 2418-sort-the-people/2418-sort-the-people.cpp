class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        vector<pair<int, string>> ans;

        vector<string> v;

        for(int i = 0; i < heights.size(); ++i){
            ans.push_back({heights[i], names[i]});
        }

        sort(ans.begin(), ans.end(), greater<>());

        for(auto p : ans){
            v.push_back(p.second);
        }

        return v;
        
    }
};