class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> ans;

        int n = nums.size();
        int left = 0, right = n;

        while(left < right){
            if(nums[left] < pivot){
                ans.push_back(nums[left]);
            }
            left++ ;
        }

        left = 0, right = n;
        
         while(left < right){
            if(nums[left] == pivot){
                ans.push_back(nums[left]);
            }
            left++ ;
        }

        left = 0, right = n;

        while(left < right){
            if(nums[left] > pivot){
                ans.push_back(nums[left]);
            }
            left++ ;
        }

        return ans;
        
    }
};