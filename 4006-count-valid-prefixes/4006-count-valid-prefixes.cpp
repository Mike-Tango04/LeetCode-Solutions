class Solution {
public:
    int countValidPrefixes(string s) {

        int zeroesCnt = 0;
        int onesCnt = 0;
        int validPrefix = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] =='0') zeroesCnt ++;
            else onesCnt ++ ;

            if(abs(zeroesCnt - onesCnt) <= 1) validPrefix ++ ;
        }
        return validPrefix;
        
    }
};