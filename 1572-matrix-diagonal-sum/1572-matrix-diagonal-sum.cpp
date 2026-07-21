class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++) {

            sum += mat[i][i];
            sum += mat[i][n - i - 1];
        }

        if (n % 2 != 0) {

            int mid = n / 2;
            sum -= mat[mid][mid];
        }

        return sum;
    }
};