class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int n = nums.size();

        int maxi = *max_element(nums.begin(), nums.end());

        long long left = 0, ans = 0, cnt = 0; 

        for(int right = 0; right < n; right++){

            if(nums[right] == maxi) cnt++ ;

                while(cnt >= k){
                    if(nums[left] == maxi){
                        cnt-- ;
                    }
                    left++ ;
                }

            ans += left;  // counting at each index
            
        }

        return ans;

    }
};