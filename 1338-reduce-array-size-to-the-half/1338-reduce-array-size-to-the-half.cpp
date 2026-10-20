class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<int,int> mp;

        int n = arr.size(); 

        for(auto val : arr) mp[val]++ ;

        vector<int> freq;

        for(auto p : mp) freq.push_back(p.second);

        sort(freq.rbegin(), freq.rend());

        int cnt = 0, unique = 0;

        for(auto val : freq){

            if(val != 0){
                cnt += val;
                unique++ ;
                if(cnt >= n/2) break;
            }
        }
        return unique;
    }
};