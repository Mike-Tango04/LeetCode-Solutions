class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        int k = pattern.size();

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {

            if (words[i].size() != k)
                continue;

             bool valid = true;

            unordered_map<char, char> mp;
            unordered_map<char, char> mp2;

            for (int j = 0; j < k; j++) {

                char candid = words[i][j];
                char patt = pattern[j];

                if (mp.count(candid) && mp[candid] != patt) {
                    valid = false;
                    break;
                }

                if (mp2.count(patt) && mp2[patt] != candid) {
                    valid = false;
                    break;
                }

                mp[candid] = patt; 
                mp2[patt] = candid;

            }

            if (valid){
               ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};