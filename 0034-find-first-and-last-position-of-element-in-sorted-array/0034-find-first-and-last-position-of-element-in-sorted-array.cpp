class Solution {
public:
    int firstPos(vector<int> &nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {

            long long mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target) { 
                start = mid + 1;
             }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int lastPos(vector<int> &nums, int target){

        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;


        while(start <= end){

             long long mid = start + (end - start)/2;

             if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
             }
             else if(nums[mid] < target){
                start = mid + 1;
             }
             else{
                end = mid - 1;
             }

        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> pos(2);

        int key1= firstPos(nums, target);
        int key2 = lastPos(nums, target);

        pos[0] = key1;
        pos[1] = key2;

        return pos;
    }
};