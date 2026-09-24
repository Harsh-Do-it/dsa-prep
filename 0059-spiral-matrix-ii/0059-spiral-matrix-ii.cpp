class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> nums;

        for(int i=1; i<=n*n; i++){
            nums.push_back(i);
        }

        vector<vector<int>>mat(n, vector<int>(n));

        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;

        int idx = 0;

        while(top<=bottom && left <= right){
            for(int i=left;i<=right;i++){
                mat[top][i] = nums[idx++];
            }
            top++;
            for(int j=top;j<=bottom;j++){
                mat[j][right] = nums[idx++];
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    mat[bottom][i] = nums[idx++];
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    mat[j][left] = nums[idx++];
                }
                left++;
            }

        }
        return mat;
        
    }
};