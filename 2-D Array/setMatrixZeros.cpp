class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        bool row0 = false, col0 = false;

        // Step 1: Check if first row has 0
        for (int j = 0; j < m; j++) {
            if (matrix[0][j] == 0) row0 = true;
        }

        // Step 2: Check if first column has 0
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) col0 = true;
        }

        // Step 3: Use first row and col to mark zero positions
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Set zeroes based on marks
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Set first row to 0 if needed
        if (row0) {
            for (int j = 0; j < m; j++) matrix[0][j] = 0;
        }

        // Step 6: Set first column to 0 if needed
        if (col0) {
            for (int i = 0; i < n; i++) matrix[i][0] = 0;
        }
    }
};

