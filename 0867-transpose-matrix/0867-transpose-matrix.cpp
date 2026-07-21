class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int m = matrix.size();    
        int n = matrix[0].size();

        vector<vector<int>> ans(n, vector<int>(m));       // Transposing n and m as n and m reverse in transpose

        for (int i = 0; i < matrix.size(); i++) {

            for (int j = 0; j < matrix[i].size(); j++) {

               ans[j][i] = matrix[i][j];  // taking input in ans[j][i] not in ans[i][j] 
               
            }
        }

        return ans;
    }
}; 