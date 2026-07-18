class Solution {
public:
    string reverseByType(string s) {

        string ans = "";
        string chars = "";
        string special = "";

        for(int i = 0; i < s.size(); i++){
            
            if(isalnum(s[i])){
                chars += s[i];
            }
        }

        reverse(chars.begin(), chars.end()) ;

        for(int i = 0; i < s.size(); i++){
            
            if(!isalnum(s[i])){
                special += s[i];
            }
        }

        reverse(special.begin(), special.end());

        int j = 0, k = 0;

        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                ans += chars[j];
                j++;
            }
            else{
                ans += special[k];
                k++;
            }
        }

        return ans;
    }
};