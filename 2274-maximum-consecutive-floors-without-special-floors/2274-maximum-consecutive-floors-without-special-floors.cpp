class Solution {
public:
    int maxConsecutive(int bottom, int t, vector<int>& s) {

        sort(s.begin(), s.end());
        int ans = s[0] - bottom;

        for (int i = 1; i < s.size(); i++) {
            int x = s[i] - s[i - 1] - 1;
            ans = max(ans, x);
        }

        ans = max(ans, t - s[s.size() - 1]);

        return ans;

        //  Approach got TLE ------------>

        // set<int> st(special.begin(), special.end());

        // int curr = 0, maxi = 0;

        // for(int i = bottom; i <= top; i++){
        //     if(!st.count(i)){
        //         maxi = max(maxi, ++curr);
        //     }
        //     else curr = 0;
        // }

        // return maxi;
    }
};