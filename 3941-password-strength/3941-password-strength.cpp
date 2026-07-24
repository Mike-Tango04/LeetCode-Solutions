class Solution {
public:
    int passwordStrength(string password) {

        unordered_set<char> st;

        int cnt = 0;

        for(auto ch : password){
            st.insert(ch);
        }

        for(auto ch : st){
            if(islower(ch)){
                cnt += 1;
            }
            
            else if(isupper(ch)){
                cnt += 2;
            }

            else if(isdigit(ch)){
                cnt += 3;
            }
            else{
                cnt += 5;
            }
        }

        return cnt;
        
    }
};