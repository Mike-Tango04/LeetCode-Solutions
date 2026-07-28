class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> freq(26, 0);
        vector<int> freq2(26, 0);

        for (auto ch : s) {
            freq[ch - 'a']++;
        }

        for (auto ch : t) {
            freq2[ch - 'a']++;
        }
        
        int j = 0;

        for (int i = 0; i < 26; i++) {

            if (freq[i] != freq2[j]) {
                return false;
            }
            j++;
        }

        return true;
    }
};