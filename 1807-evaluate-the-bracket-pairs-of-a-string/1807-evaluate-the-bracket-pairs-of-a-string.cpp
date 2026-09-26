class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        string ans;

        unordered_map<string, string> mp;

        for (auto& p : knowledge) mp[p[0]] = p[1];

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != '(') ans += s[i];

            else {

                string temp = "";

                if (s[i] == '(') {
                    i++;

                    while (s[i] != ')') {
                        temp += s[i];
                        i++;
                    }
                }

                if (mp.find(temp) != mp.end())  ans += mp[temp];
                else ans += '?';
            }
        }
        return ans;
    }
};