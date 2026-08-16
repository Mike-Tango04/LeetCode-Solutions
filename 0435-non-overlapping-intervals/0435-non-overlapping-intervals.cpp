class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        int cnt = 0;

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            return a[0] < b[0];
        });

        vector<vector<int>> ans = {(intervals[0])};

        for(int i = 1; i < intervals.size(); ++i){

            if(intervals[i][0] < ans.back()[1]){
                
                if(ans.back()[1] > intervals[i][1]){
                    ans.back() = intervals[i];
                }
                cnt++ ;
            }
            
            else ans.push_back(intervals[i]);
        }

        return cnt;
        
    }
};