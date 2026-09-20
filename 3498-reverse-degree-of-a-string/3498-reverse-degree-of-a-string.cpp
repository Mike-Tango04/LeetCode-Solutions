class Solution {
public:
    int reverseDegree(string s) {

        int ans = 0;

        for(int i = 1; i <= s.size(); i++){
            ans += (('z' - s[i - 1]) + 1) * i;
        }
        return ans;
    }
};