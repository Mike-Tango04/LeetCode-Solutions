class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        long long product = 0;

        int largest = INT_MIN;
        int Slargest = INT_MIN;
        int Thirdlargest = INT_MIN;

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > largest) {
                Thirdlargest = Slargest;
                Slargest = largest;
                largest = nums[i];
            }

            else if (nums[i] > Slargest) {
                Thirdlargest = Slargest;
                Slargest = nums[i];
            }

            else if (nums[i] > Thirdlargest) {
                Thirdlargest = nums[i];
            }

            if (nums[i] < smallest) {
                secondSmallest = smallest;
                smallest = nums[i];
            }

            else if (nums[i] < secondSmallest) {
                secondSmallest = nums[i];
            }
        }

        long long p1 = 1LL * largest * Slargest * Thirdlargest;
        long long p2 = 1LL * largest * smallest * secondSmallest;

        product = max(p1, p2);

        return product;
    }
};