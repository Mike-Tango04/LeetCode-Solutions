class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {

        int minCost = 0;
        int n = costs.size();

        sort(costs.begin(), costs.end(), [](auto &a , auto &b){
            return(a[0] - a[1] < b[0] - b[1]);
        });

        for(int i = 0; i < n; i++){

            if(i < n/2) minCost += costs[i][0];
            else minCost += costs[i][1];
        }

        return minCost;
        
    } 
};