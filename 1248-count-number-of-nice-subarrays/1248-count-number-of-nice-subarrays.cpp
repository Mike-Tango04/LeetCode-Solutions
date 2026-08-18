class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n = nums.size(), left = 0;
        int cnt =  0, odd = k, even = 0;

        for(int right = 0; right < n; right++){

            if(nums[right] & 1) odd--;

            while(odd < 0){
                if(nums[left] & 1) odd++;
                left++ ;
            }
            
            if(odd == 0){
                int temp = left;

                while(temp <= right && !(nums[temp] & 1)){
                    temp++ ;
                }
              cnt += temp - left + 1;
            }
        }

        return cnt;
        
    }
};