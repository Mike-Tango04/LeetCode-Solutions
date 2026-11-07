class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int totalLeft) {

        int cnt = 0, n = rocks.size();
        int Diff = 0;
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            Diff += capacity[i] - rocks[i];
            v[i] = Diff;
            Diff = 0;
        }

        sort(v.begin(), v.end());

        for(auto val : v){
            if(totalLeft - val >= 0){
                totalLeft -= val;
                cnt++;
            }
            else break;
        }

        return cnt;
    }
};