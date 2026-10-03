class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    string sortVowels(string s) {
        string ans;

        vector<pair<char, int>> v = {
            {'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}
        };

        map<char, int> first;

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                for (auto &p : v) {
                    if (p.first == s[i]) {
                        p.second++;

                        if (!first.count(s[i]))
                            first[s[i]] = i;

                        break;
                    }
                }
            }
        }

        sort(v.begin(), v.end(), [&](const auto &a, const auto &b) {
            if (a.second != b.second)
                return a.second > b.second;

            return first[a.first] < first[b.first];
        });

        int j = 0;

        for (char ch : s) {
            if (isVowel(ch)) {
                ans += v[j].first;
                v[j].second--;

                if (v[j].second == 0)
                    j++;
            } else {
                ans += ch;
            }
        }

        return ans;
    }
};