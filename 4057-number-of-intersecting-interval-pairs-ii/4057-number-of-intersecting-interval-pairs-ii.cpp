class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& v) {

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });

        long long cnt = 0;

        for (int i = 0; i < v.size(); i++) {

            int low = i + 1;
            int high = v.size() - 1;
            int j = i;

            while (low <= high) {

                int mid = low + (high - low) / 2;

                if (v[mid][0] <= v[i][1]) {
                    j = mid;
                    low = mid + 1;
                } 
                else high = mid - 1;
            }

            cnt += j - i;
        }

        return cnt;
    }
};