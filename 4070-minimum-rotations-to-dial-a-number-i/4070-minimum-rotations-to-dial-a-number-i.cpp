class Solution {
public:
    int minRotations(string s) {
        
        //// 1st Approach----------------------------------------------------------------- 

        // int cnt = min(s[0] -'0', '0' + 10 - s[0]);

        // for (int i = 0; i < s.size() - 1; i++) {

        //     int x = min(s[i], s[i+1]);
        //     int y = max(s[i], s[i+1]);
        //     cnt += min(y - x, x + 10 - y);
        // }

        // return cnt;

        //// ------  2nd Approach

        int prev = 0;
        int cnt = 0;

        for(int i = 0; i < s.size(); i++){

            int curr = s[i] - '0';
            int clock = (curr - prev + 10) % 10;
            int anti = (prev - curr + 10) % 10;

            cnt += min(clock, anti);

            prev = curr;
        }

        return cnt;
    }
};