class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int maxi = 0, curr = 0;
        int left = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == 0) k-- ;
 
            while(k < 0){
                if(nums[left] == 0)k++ ;
                left++ ;
            }
            maxi = max(maxi, i - left + 1);
        }

        return maxi;
    }
};