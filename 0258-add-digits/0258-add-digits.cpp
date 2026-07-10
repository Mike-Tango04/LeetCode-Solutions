class Solution {
public:
    int addDigits(int num) {

        if (num == 0) {
            return 0;
        }

        int digit = 0;
        int sum = 0;

        while (num >= 10) {

            sum = 0;

            while (num > 0) {

                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }
            num = sum;
        }

        return num;
    }
};