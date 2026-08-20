class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector<int> arr1;
        vector<int> arr2;

        int n = nums.size();

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int k = 2;

        while (k < n) {

            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[k]);
            } else {
                arr2.push_back(nums[k]);
            }

            k++;
        }
    

    for (auto num : arr2) {
        arr1.push_back(num);
    }

    return arr1;
}
}
;