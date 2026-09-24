class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans;

        int row=0, col=0;
        bool up = true;

        while(ans.size()<m*n){
            ans.push_back(mat[row][col]);
            if(up){
                if(col == m-1){
                    row++;
                    up=false;
                }else if(row == 0){
                    col++;
                    up=false;

                }else{
                    row--;
                    col++;
                }
            }
            else{
                if(row == n-1){
                    col++;
                    up=true;

                }else if(col == 0){
                    row++;
                    up=true;
                }else{
                    row++;
                    col--;
                }
            }
        }
        return ans;
        
    }
};