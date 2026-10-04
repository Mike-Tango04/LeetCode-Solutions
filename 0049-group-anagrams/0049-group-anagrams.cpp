class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> s) {

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(int i = 0; i < s.size(); i++){

            string temp = s[i];
            sort(temp.begin(), temp.end());

            mp[temp].push_back(s[i]);
        }

        for(auto &p : mp){
            ans.push_back(p.second);
        }

        return ans;
    }
};