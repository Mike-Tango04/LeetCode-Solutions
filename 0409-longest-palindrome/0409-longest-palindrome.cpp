class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mp;

        bool oddExist = false;

        int len = 0;

        for (auto ch : s) {
            mp[ch]++;
        }

        for (auto ch : mp) {

            if (ch.second % 2 == 0) {

                len += ch.second;

            } else {

                oddExist = true;

                len += ch.second - 1;
            }
        }

        if (oddExist)
            len++;

        return len;
    }
};