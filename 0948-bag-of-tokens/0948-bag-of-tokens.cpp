class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(), tokens.end());

        int n = tokens.size();

        int maxScore = 0, score = 0, left = 0, right = tokens.size() - 1;

        while(left <= right){

            if(power >= tokens[left]){
                power -= tokens[left];
                left++ ;
                score++ ;
                maxScore = max(maxScore, score);
            }
            else{
                if(score > 0){
                    power += tokens[right];
                    right-- ;
                    score-- ;
                }
                else{
                    return maxScore;
                }
            }
        }

        return maxScore;

        
    }
};