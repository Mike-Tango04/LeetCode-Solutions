class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];

        int ans = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            int currProfit = prices[i] - minPrice;

            ans = max(ans, currProfit);
        }

        return ans;
    }
};