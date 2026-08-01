class Solution {
public:
    bool kokoYouCantEatBananaLikeThis(const vector<int>& piles, int mid, int hours) {

        long long currHours = 0;

        for (int i = 0; i < piles.size(); ++i) {
            currHours += (piles[i] + mid - 1) / mid;
        }

        return currHours <= hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int ans = -1;
        int start = 1;
        int maxPile = piles[0];

        for (int i = 1; i < piles.size(); i++) {
            if (piles[i] > maxPile) {
                maxPile = piles[i];
            }
        }

        int end = maxPile;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (kokoYouCantEatBananaLikeThis(piles, mid, h)) {
                ans = mid;
                end = mid - 1;
            }
             else {
                start = mid + 1;
            }
        }
        return ans;
    }
};