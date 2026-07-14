class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<string> str(score.size());

        vector<pair<int, int>> v;

        for (int i = 0; i < score.size(); i++) {
            v.push_back({score[i], i});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        for (int i = 0; i < v.size(); i++) {

            int index = v[i].second;

            if (i == 0)
                str[index] = "Gold Medal";
            else if (i == 1)
                str[index] = "Silver Medal";
            else if (i == 2)
                str[index] = "Bronze Medal";

            else {
                str[index] = to_string(i + 1);
            }
        }

        return str;
    }
};