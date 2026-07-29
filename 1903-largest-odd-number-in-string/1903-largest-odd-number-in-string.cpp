class Solution {
public:
    string largestOddNumber(string num) {

        int j = 0;
        int i = num.size() - 1;

        if((num.back() - '0') % 2 != 0){
            return num;
        }

        for(; i >= 0; i--){

            if((num[i] -'0') % 2 != 0){
                 j = i;
                 break;
            }

        }

        return num.substr(0, i+1);

        
    }
};