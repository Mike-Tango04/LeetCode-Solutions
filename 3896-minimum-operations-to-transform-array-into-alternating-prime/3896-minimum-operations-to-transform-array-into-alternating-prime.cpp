class Solution {
public:
    bool checkPrime(int num) {
        if (num < 2)
            return false;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }

        return true;
    }

    int minOperations(vector<int>& nums) {

        int cnt = 0;

        for (int i = 0; i < nums.size(); ++i) {

            bool ans = checkPrime(nums[i]);

            if (ans == false && i % 2 == 0) {

                while (!checkPrime(nums[i])) {
                    nums[i]++;
                    cnt++;
                }
            }

            else if (ans == true && i % 2 != 0) {

                while (checkPrime(nums[i])) {
                    nums[i]++;
                    cnt++;
                }
            }
        }

        return cnt;
    }
};