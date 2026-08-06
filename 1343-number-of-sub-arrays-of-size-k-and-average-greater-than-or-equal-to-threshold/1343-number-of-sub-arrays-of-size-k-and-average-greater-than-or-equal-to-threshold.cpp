class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int cnt = 0;
        int sum = 0;
        int left = 0;
        int n = arr.size();

        for (int right = 0; right < k; right++) {
            sum += arr[right];
        }

        if (sum >= k * threshold) cnt++;

        int right = k;

        while (right < n) {

            sum -= arr[left];
            left++;

            sum += arr[right];
            right++;

            if (sum >= k * threshold)  cnt++;
        }

        return cnt;
    }
};