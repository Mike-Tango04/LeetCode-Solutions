class Solution {
public:
    int digitFrequencyScore(int n){

        string str = to_string(n);

        long long sum = 0;

        unordered_map<char, int> mp;

        for(auto ch : str){
            mp[ch]++ ;
        }

        for(auto ch : str){

            sum += (mp[ch]) * (ch - '0');
            mp.erase(ch);
            
            
        }

        return sum;
        
    }
};