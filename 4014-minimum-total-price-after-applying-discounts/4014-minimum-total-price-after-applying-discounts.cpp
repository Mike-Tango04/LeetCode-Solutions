class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = prices.size(), m = discounts.size();

        int i = 0, j = 0;
        double minPrice = 0;

        while (i < n && j < m) {

            minPrice += prices[i] * (100.00 - discounts[i]) / 100;
            i++;
            j++;
        }
        
        while(i < n){
         minPrice += prices[i];
          i++ ;
        }
            
        
        return minPrice;
    }
};
   