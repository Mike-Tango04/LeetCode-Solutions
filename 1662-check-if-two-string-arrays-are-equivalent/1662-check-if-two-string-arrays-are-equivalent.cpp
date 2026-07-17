class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        string ans = "";
        string ans2 = "";

        for (auto str : word1) {
            ans += str;
        }

        for (auto str : word2) {
            ans2 += str;
        }

        return ans == ans2;
    }
};