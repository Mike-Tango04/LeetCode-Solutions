class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(), nums.end());

        int start = 0;
        int end = nums.size() - 1;

        long long sum = 0;

        while(start <= end){

            sum += 1LL * nums[end] * nums[end];
            if(start == end) break;
            end--;

            sum -= 1LL * nums[start] * nums[start];
            start++ ;
            
        }

        return sum;


    }
};