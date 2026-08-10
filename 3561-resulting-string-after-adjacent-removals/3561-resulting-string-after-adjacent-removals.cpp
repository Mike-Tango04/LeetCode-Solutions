class Solution {
public:
    string resultingString(string s) {

        stack<char> st;

        for(auto ch  : s){
            if(st.empty()) {
                st.push(ch);
                continue;
            }
            else { 
                char tp = st.top();
                if(abs(tp - ch) == 1 || abs(tp - ch) == 25) st.pop();
                else st.push(ch);
            }
        }

        string ans = "";

        while(!st.empty()){
            char ch = st.top();
            ans.push_back(ch);
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};