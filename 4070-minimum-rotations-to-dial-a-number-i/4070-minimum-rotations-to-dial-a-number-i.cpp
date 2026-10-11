class Solution {
public:
    int minRotations(string s) {

        int cnt = min(s[0] -'0', '0' + 10 - s[0]);

        for (int i = 0; i < s.size() - 1; i++) {

            int x = min(s[i], s[i+1]);
            int y = max(s[i], s[i+1]);
            cnt += min(y - x, x + 10 - y);
        }

        return cnt;
    }
};