class Solution {
public:
    bool canMakeBouquets(const vector<int>& bloomDay, int mid, int m, int k) {

        int countBouquets = 0;
        int consecutive = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= mid) {
                consecutive++;

                if (consecutive == k) {
                    countBouquets++;
                    consecutive = 0;
                }
            } 
            else {
                consecutive = 0;
            }
        }

        return countBouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int start = 1;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int minDays = -1;

        int n = bloomDay.size();

        if (1LL* m * k > n) {
            return -1;
        }

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (canMakeBouquets(bloomDay, mid, m, k)) {
                minDays = mid;
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return minDays;
    }
};