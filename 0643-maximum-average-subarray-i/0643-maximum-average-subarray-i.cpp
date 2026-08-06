class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int left = 0;
        int sum = 0;
        int n = nums.size();

        for(int right = 0; right < k; right++){
            sum += nums[right];
        }

        int maxSum = sum;
        int right = k;

        while(right < n){

            sum -= nums[left];
            left ++ ;
 
            sum += nums[right];
            right++;

            maxSum = max(maxSum, sum);
        } 

        return (double)maxSum/k;
        
    }
};