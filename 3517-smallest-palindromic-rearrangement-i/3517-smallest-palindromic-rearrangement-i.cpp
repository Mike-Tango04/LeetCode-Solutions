class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);

        string midChar = "";

        string ans = "";

        for (auto ch : s) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {

            if (freq[i] % 2 == 0) {
                int half = freq[i] / 2;
                ans += string(half, char('a' + i));

            } else {
                int mid = freq[i] / 2;
                ans += string(mid, char('a' + i));
                midChar = char('a' + i);
            }
        }

        string copy = ans;
        reverse(copy.begin(), copy.end());

        ans += midChar + copy;

        return ans;
    }
};