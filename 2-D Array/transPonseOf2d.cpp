class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();        // rows
        int m = matrix[0].size();     // columns

        vector<vector<int>> ans(m , vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
