class Solution {
public:
    long long sumAndMultiply(int n) {

        long long ans = 0;

        int sum = 0;

        string x = "";

        string str = to_string(n);

        for (auto num : str) {
            if (num != '0') {
                x += num;
            }
            sum += num - '0';
        }

        long long numX = 0;

        if (!x.empty()) {

            numX = stoll(x);
        }

        ans = sum * numX;

        return ans;
    }
};