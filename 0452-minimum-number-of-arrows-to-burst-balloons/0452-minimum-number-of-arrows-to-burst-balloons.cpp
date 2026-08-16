class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(), points.end(),[](auto& a, auto& b){
             return a[0] < b[0]; 
        });

        int cnt = 1;
        int currPos = points[0][1];

        for (int i = 1; i < points.size(); i++) {

            if(points[i][0] <= currPos) {
                currPos = min(currPos, points[i][1]);
            } 
            else{
                currPos = points[i][1];
                cnt++ ;
            }
        }

        return cnt ;
    }
};
