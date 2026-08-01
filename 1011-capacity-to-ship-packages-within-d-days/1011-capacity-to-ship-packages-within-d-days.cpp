class Solution {
public:
    bool canShip(const vector<int>& weights, int mid, int givenDays) {

        int capacitySum = 0;
        int daysCount = 1;

        for (int i = 0; i < weights.size(); i++) {

            if (capacitySum + weights[i] > mid) {
                daysCount++;
                capacitySum = weights[i];
            } 
            else {
                capacitySum += weights[i];
            }
        }
        return daysCount <= givenDays;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int minCapacity = 0;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (canShip(weights, mid, days)) {
                minCapacity = mid;
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return minCapacity;
    }
};