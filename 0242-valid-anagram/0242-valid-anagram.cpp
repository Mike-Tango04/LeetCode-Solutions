class Solution {
public:
    bool isAnagram(string op, string topi) {

        vector<int> s(26, 0);
        vector<int> t(26, 0);

        for(auto ch : op){
            s[ch - 'a']++ ;
        }

        for(auto ch : topi) t[ch - 'a']++ ;

        for(int i = 0; i < 26; i++){
            if(s[i] != t[i]) return false;
        }

        return true;
        
    }
};