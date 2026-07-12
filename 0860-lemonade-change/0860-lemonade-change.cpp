class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int cnt = 0;
        int ten = 0;

        for (int i = 0; i < bills.size(); ++i) {

            if (bills[i] == 5) {
                cnt++;
            }

            else if (bills[i] == 10) {

                ten++;

                if (cnt != 0) {
                    cnt--;
                } else {
                    return false;
                }
            }

            else {

                if (ten != 0 && cnt != 0) {
                    ten--;
                    cnt--;
                }

                else if (cnt >= 3) {
                    cnt = cnt - 3;
                }

                else {
                    return false;
                }
            }
        }

        return true;
    }
};