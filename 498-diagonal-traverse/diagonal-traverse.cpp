class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        int m = mat.size();
        int n = mat[0].size();

        vector<int> ans ;

        int row = 0;
        int col = 0;
        bool up = true;

        for(int i=0;i<m*n;i++)
        {
            ans.push_back(mat[row][col]);

            if(up)
            {
                if(col==n-1)
                {
                    row++;
                    up = false;
                }
                else if(row==0)
                {
                    col++;
                    up = false;
                }
                else{
                    col++;
                    row--;
                }
            }else{
                 if(row==m-1)
                {
                    col++;
                    up = true;
                }
                else if(col==0)
                {
                    row++;
                    up = true;
                }
                else{
                    row++;
                    col--;
                }
            }
        }
        return ans;

    }
};