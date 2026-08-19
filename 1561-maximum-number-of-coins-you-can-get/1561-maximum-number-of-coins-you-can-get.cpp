class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.begin(), piles.end());

        int i = 0, n = piles.size();
        int cnt = 0, j = n - 2;

        while(i < j){
            cnt += piles[j];
            j -= 2;
            i++;
        }

        return cnt;
        
    }
};