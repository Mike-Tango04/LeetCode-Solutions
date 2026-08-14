class Solution {
public:
    int maximumLengthSubstring(string s) {

        unordered_map<int,int> mp;
        
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.size(); right++){

            mp[s[right]]++ ;

            while(mp[s[right]] > 2){
                mp[s[left]]--;
                left++ ;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
        
    }
};