class Solution {
public:
    int countVowel(string word) {

        int cnt = 0;

        for (int i = 0; i < word.size(); i++) {

            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u') {
                cnt++;
            }
        }

        return cnt;
    }
    string reverseWords(string s) {

        stringstream ss(s);

        string ans = "";

        string word;

        ss >> word;

        int firstCount = countVowel(word);

        ans += word;

        while(ss >> word){

            if(!ans.empty()){
                ans += " ";
            }

            if(countVowel(word) == firstCount){
                reverse(word.begin(), word.end());
                ans += word;
            }
            else{
                ans += word;
            }
        }

        return ans;
    }
};