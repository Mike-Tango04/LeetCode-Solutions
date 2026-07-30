// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int key = 0;
        int start = 1;
        int end = n;

        while (start <= end) {

            long long mid = start + (end - start) / 2;

            if (isBadVersion(mid)) {
                key = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return key;
    }
};