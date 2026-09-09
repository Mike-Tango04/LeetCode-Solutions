class Solution {
public:
    long long countCommas(long long n) {

        if(n < 1000) return 0;

        long long ans = 0;

        long long pos = 1000;

        while(pos <= n){
            ans += n - pos + 1;
            pos*= 1000;
        }

        return ans;

    }
};