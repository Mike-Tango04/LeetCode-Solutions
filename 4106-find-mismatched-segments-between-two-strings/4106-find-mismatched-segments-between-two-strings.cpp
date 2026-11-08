class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        vector<vector<string>> ans;

        int n = s1.size();

        string str1 = "", str2 = "";

        for (int i = 0; i < s1.size(); i++) {

            if (s1[i] == s2[i]) {

                if (!str1.empty()) {
                    ans.push_back({str1, str2});
                    str1.clear();
                    str2.clear();
                }
            } 
            else {
                str1 += s1[i];
                str2 += s2[i];
            }

            if (i == n - 1 && !str1.empty()) {
                ans.push_back({str1, str2});
            }
        }

        return ans;
    }
};