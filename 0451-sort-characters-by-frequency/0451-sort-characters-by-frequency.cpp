class Solution {
public:
    string frequencySort(string s) {

        string ans = "";

        unordered_map<char, int> mp;

        vector<pair<char, int>> v;

        for(auto key : s) mp[key]++ ;

        for(auto item : mp) v.push_back(item);

        sort(v.begin(), v.end(), [] (auto &a, auto &b){
            return a.second > b.second;
        });

        for(auto p : v){
            ans.append(p.second, p.first);
        }

        return ans;
        
    }
};