class Solution {
public:
    int partitionString(string s) {

        int cnt = 1;

        unordered_map<char, int> mp;

        for(int i = 0; i < s.size(); i++){
            
            mp[s[i]]++ ;

            if(mp[s[i]] > 1){
                cnt++ ;
                mp.clear();
                mp[s[i]]++;
            }
        }

        return cnt;

    }
};