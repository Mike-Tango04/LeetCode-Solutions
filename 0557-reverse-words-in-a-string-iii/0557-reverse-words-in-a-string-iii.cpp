class Solution {
public:
    string reverseWords(string s) {

        string ans = "";
        stringstream ss(s);
        string word;

        while (ss >> word) {

            reverse(word.begin(), word.end());

            if (!ans.empty()) ans += " ";
            ans += word;
            
        }

        return ans;
    }
};