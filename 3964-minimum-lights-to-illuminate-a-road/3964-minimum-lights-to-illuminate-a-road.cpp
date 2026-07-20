class Solution {
public:
    int minLights(vector<int>& lights) {

        int n = lights.size();

        vector<int> diff(n + 1, 0);

        for (int i = 0; i < n; i++) {

            if (lights[i] > 0) {

                int left = max(0, i - lights[i]);
                int right = min(n - 1, i + lights[i]);
                
                diff[left]++;

                if (right + 1 < n) {
                    diff[right + 1]--;
                }
            }
        }

        vector<bool> visible(n, false);

        int coverage = 0;

        for (int i = 0; i < n; i++) {

            coverage += diff[i];

            if (coverage > 0) {
                visible[i] = true;
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (!visible[i]) {

                ans++;

                visible[i] = true;

                if (i + 1 < n)
                    visible[i + 1] = true;

                if (i + 2 < n)
                    visible[i + 2] = true;
            }
        }

        return ans;
    }
};