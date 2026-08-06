class Solution {
public:

    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {

        int cnt = 0;
        int left = 0;
        int n = s.size();

        for (int right = 0; right < k; right++) {

            cnt += isVowel(s[right]);
        }
 
        int maxVowel = cnt;
        int right = k;

        while (right < n) { 
            
            cnt -= isVowel(s[left]);
            left++ ;

            cnt += isVowel(s[right]);
            right++ ;

            maxVowel = max(maxVowel, cnt);
        }

        return maxVowel;
    }
};