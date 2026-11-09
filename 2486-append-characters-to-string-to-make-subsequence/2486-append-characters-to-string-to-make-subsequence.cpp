class Solution {
public:
    int appendCharacters(string s, string t) {

        int n = s.size(), m = t.size();
        int cnt = 0;
        int j = 0, i = 0;

        while(i < n && j < m){
            if(s[i] == t[j]){
                cnt++;
                j++;
            }
            i++ ;
        }

        if(i == n) return m - cnt;
        
        return 0;
    }
};