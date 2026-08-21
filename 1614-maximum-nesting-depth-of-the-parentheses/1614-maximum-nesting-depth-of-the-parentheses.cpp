class Solution {
public:
    int maxDepth(string s) {

        int depth = 0, maxDepth = 0;

        for(auto ch : s){

            if(ch != '(' && ch != ')') continue;

            if(ch == '('){
                depth++ ;
                maxDepth = max(maxDepth, depth);
            }
            else{
                depth-- ;
            }

        }

        return maxDepth;
        
    }
};