class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;
        int idx = -1;
        int leftSum = 0;
        int rightSum = 0;

        for(auto item : nums) totalSum += item;    // totalsum of vector

        for(int i = 0; i < nums.size(); ++i){
            
            rightSum = totalSum - leftSum - nums[i];  

            if(leftSum == rightSum){
                idx = i;
                return idx;
            }
            leftSum += nums[i];
        }

        return idx;
        
    }
};