class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int left = 1;
        int Rprod = 1;

        vector<int> ans(n);
        vector<int> ans2(n);

        for(int i = 0; i < nums.size(); i++){
            ans[i] = left;
            left *= nums[i];
        }

        for(int right = n - 1; right >= 0; right--){
            ans2[right] = Rprod;
            Rprod *= nums[right];

        }

        for(int i = 0; i < n; i++){
            nums[i] = ans[i] * ans2[i];
        }

        return nums;

    }
};