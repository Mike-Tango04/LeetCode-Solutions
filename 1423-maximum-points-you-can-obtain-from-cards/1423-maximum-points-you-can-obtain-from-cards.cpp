class Solution {
public:
    int maxScore(vector<int>& cp, int k) {

        int maxSum = 0, sum = 0;

        for(int i = 0; i < k; i++) sum += cp[i];

        maxSum = sum;
        int left = k - 1, right = cp.size() - 1;

        for(int i = 0; i < k; i++){
            sum -= cp[left];
            sum += cp[right];
            left--;
            right--;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
}; 