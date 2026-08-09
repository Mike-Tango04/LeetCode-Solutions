class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(discounts.rbegin(), discounts.rend());
        sort(prices.rbegin(), prices.rend());

        int p = prices.size(), d = discounts.size();

        int i = 0, j = 0;
        double finalPrice = 0;

        while (i < p && j < d) {
            finalPrice += prices[i] * (100.00 - discounts[j]) / 100.00;
            i++;
            j++;
        }

        while (i < p) {
            finalPrice += prices[i];
            i++;
        }

        return finalPrice;
    }
};