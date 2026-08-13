class Solution {
public:
    bool isValid(string s) {

        unordered_map<int, int> mp = {{'[', -3}, {'{', -2}, {'(', -1},{']', 3}, {'}', 2}, {')', 1}};

        stack<char> st;

        for(auto bracket : s){
            if(mp[bracket] < 0) st.push(bracket);
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    char ch = st.top();
                    if(mp[ch] + mp[bracket] != 0) return false;
                    st.pop();
                }
            }
        }

        if(!st.empty()) return false;
        return true;
        
    }
};