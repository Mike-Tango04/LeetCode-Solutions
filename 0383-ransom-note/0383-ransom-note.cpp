class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26, 0);
        vector<int> freq2(26, 0);

        for (auto ch : ransomNote) {
            freq[ch - 'a']++ ;
        }

        for (auto ch : magazine) {
            freq2[ch - 'a']++ ;
        }

        for (int i = 0; i < 26; i++) {

            if (freq2[i] < freq[i]) {
                return false;
            }
        }

        return true;
    }
};