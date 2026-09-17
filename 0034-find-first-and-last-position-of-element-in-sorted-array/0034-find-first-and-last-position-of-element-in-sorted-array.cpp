class Solution {
public:
    
    int firstOcc(const vector<int> &nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return ans;
    }

    int secOcc(const vector<int> &nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> arr;
        int first = firstOcc(nums, target);
        int sec = secOcc(nums, target);

        arr.push_back(first);
        arr.push_back(sec);

        return arr;
        
    }
};