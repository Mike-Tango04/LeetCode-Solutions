class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n = s.size();
        int m = p.size();

        vector<int> ans;
        vector<int>need(26, 0);
        vector<int> window(26, 0);

        if(m > n) return ans;
        
        for(auto ch : p){
            need[ch - 'a']++ ;
        }

        int left =  0;

        for(int i = 0; i < m; i++){
            window[s[i] - 'a']++ ;
        }

        if(need == window){
            ans.push_back(left);
        }

        int right = m;

        while(right < n){

            window[s[left] - 'a']--;
            left ++;

            window[s[right] - 'a'] ++;
            right ++;

            if(need == window) ans.push_back(left);


        }
        
        return ans;
        
    }
};