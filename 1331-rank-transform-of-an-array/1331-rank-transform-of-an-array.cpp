class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        unordered_map<int, int> mp;

        vector<int> temp = arr;

        int ans = 0;

        sort(temp.begin(), temp.end());

        for(auto num : temp){
            
            if(mp.find(num) == mp.end()){
                ans ++ ;
                mp[num] = ans;   // stored the rank here, Not Freq
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = mp[arr[i]];    //mp[arr[i]] is storing rank in map
        }

        return arr;
        
    }
};

