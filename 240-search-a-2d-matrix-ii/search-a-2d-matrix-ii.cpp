class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0) return false;   // empty matrix case
        int cols = matrix[0].size();

        // Start from the top-right corner
        int row = 0, col = cols - 1;

        // Traverse until we go out of bounds
        while (row < rows && col >= 0) {
            if (matrix[row][col] == target) {
                return true;  // found target
            } else if (matrix[row][col] > target) {
                col--;        // move left
            } else {
                row++;        // move down
            }
        }
        return false;  // target not found
    }
};
