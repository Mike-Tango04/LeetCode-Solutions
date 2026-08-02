class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            need[s1[i] - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            window[s2[i] - 'a']++;
        }

        if (need == window) {
            return true;
        }

        int left = 0;
        int right = n;

        while (right < m) {

            window[s2[left] - 'a']--;
            left++;

            window[s2[right] - 'a']++;
            right++;

            if (need == window)
                return true;
        }
        return false;
    }
};