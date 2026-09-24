class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size()-1;

        while(row<matrix.size() && col>=0)
        {
            int corner = matrix[row][col];

            if(target==corner) return true;
            else if(target>corner) row++;
            else col--;
        }
        return false;
    }
};