class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < groupSizes.size(); ++i) {
            mp[groupSizes[i]].push_back(i);
        }

        vector<vector<int>> ans;

        for (auto cnt : mp) {

            vector<int> temp;

            for (auto num : cnt.second) {

                temp.push_back(num);

                if (cnt.first == temp.size()) {

                    ans.push_back(temp);
                    temp.clear();
                    
                }
            }
        }

        return ans;
    }
};