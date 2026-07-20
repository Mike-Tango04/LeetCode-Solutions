class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        int n = nums.size();

        int sum = 0;
        int diff = 0;

        vector<int> temp = nums;

        sort(temp.begin(), temp.end() , greater<int>());

        for(int i = 0; i < k; i++){ 

            sum += temp[i];
        }
 
        for (int i = n - 1; i >= n - k; i--) {

             diff += temp[i];
        }

        int ans = abs(sum - diff);

        return ans;
    }
};