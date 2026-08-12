class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Do it in required complexity later

        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        int start = 0;

        vector<int> ans(n+m);
        int a = 0;
        
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                ans[a] = nums1[i];
                i++;
                a++;
            }
            else{
                ans[a] = nums2[j];
                a++;
                j++;
            }
        }

        while(i < n){
            ans[a] = nums1[i];
            i++;
            a++;
        }
        
        while(j < m){
            ans[a] = nums2[j];
            a++;
            j++;
        }

        int s = ans.size();

        if(s % 2 == 0){
            double mid = (ans[s/2] + ans[s/2 - 1])/2.00;
            return mid;
        }
        else{
            double mid = s/2;
            return ans[mid];
        }
        
    }
};