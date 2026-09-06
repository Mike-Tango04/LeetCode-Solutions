class Solution {
public:
    int countGoodRotations(vector<int>& nums) {

        long long total = accumulate(nums.begin(), nums.end(), 0LL);

        long long leftSum = 0, cnt = 0;

        int n = nums.size();
        int k = n/2;

        for(int i = 0; i < k; i++) leftSum += nums[i];
        
        if(leftSum > (total - leftSum)) cnt++ ;

        int left = 0;

        for(int i = 1; i < n; i++){

            leftSum -= nums[left];
            leftSum += nums[(i + k - 1) % n];

            if(leftSum > (total - leftSum)) cnt++;
            left++ ;

        }

        return cnt;
        
    }
};
