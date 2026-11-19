class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {

        vector<vector<int>> ans;

        sort(people.begin(), people.end(), [](auto &a, auto &b){
            if(a[0] == b[0]){
                return a[1] < b[1];  // Tie braker :- Sort asc if height is same 
            }
            else return a[0] > b[0]; // Sort Tallest first 
        });

        for(int i = 0; i < people.size(); i++){
            ans.insert(ans.begin() + people[i][1], people[i]);  
        }
        return ans;
    }
};