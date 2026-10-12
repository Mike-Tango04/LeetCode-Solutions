class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        vector<vector<int>> ans;
        ans.push_back(newInterval);

        for(int i = 0; i < intervals.size(); i++){

            int start = ans.back()[0];
            int end = ans.back()[1];

            if(start <= intervals[i][1] && end >= intervals[i][0]){
                ans.back()[0] = min(start, intervals[i][0]);
                ans.back()[1] = max(end, intervals[i][1]);
            }

            else if(start < intervals[i][0]){
                ans.push_back(intervals[i]);
            }

            else{
                vector<int> temp = ans.back();
                ans.pop_back();
                ans.push_back(intervals[i]);
                ans.push_back(temp);
            }
        }

        return ans;

    }
};