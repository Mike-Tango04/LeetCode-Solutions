class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int cnt = 0;

        for (auto num : nums) {
            
            int dig = 0;

            while (num > 0) {

                dig = num % 10;
                if (dig == digit) {
                    cnt++;
                }
                num = num/10;
            }
        }

        return cnt;
    }
};