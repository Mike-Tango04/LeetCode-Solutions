class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int ,int>mp;
        int cnt = 0;

        unordered_map<int,int>mp2;
        int cnt2 = 0;

        for(auto val : nums1){
            mp[val] ++ ;
        }

        for(auto val : nums2){
            mp2[val] ++ ;
        }

        for(auto num : nums1){

            if(mp2.find(num) != mp2.end()){
                cnt ++ ;
            }
        }

        for(auto num : nums2){

            if(mp.find(num) != mp.end()){
                cnt2 ++ ;
            }
        }

        vector<int> ans;

        ans.push_back(cnt);
        ans.push_back(cnt2);

        return ans;
        
    }
};