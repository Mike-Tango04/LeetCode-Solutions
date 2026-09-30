class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int> sf(26, 0);
        vector<int> tf(26, 0);

        for(auto ch : s) sf[ch - 'a']++;
        for(auto ch : t) tf[ch - 'a']++ ;

        for(int i = 0; i < 26; i++){
            if(sf[i] != tf[i]) return false;
        }
        return true;
    }
};