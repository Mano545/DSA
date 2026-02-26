class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0,bottom  = n-1,left = 0,right = n-1;
        int k = n*n;
        vector<vector<int>> mat(n,vector<int>(n));
        int j = 1;
        while(j<=k){
            for(int i = left;i<=right;i++){
                mat[top][i] = j++;
                // cout<<mat[top][i]<<" ";
            }
            top+=1;
            if(j>=k) break;
            for(int i = top;i<=bottom;i++){
                mat[i][right] = j++;
                // cout<<mat[top][i]<<" ";
            }
            right-=1;
            if(j>k) break;
            for(int i=right;i>=left;i--){
                mat[bottom][i] = j++;
                // cout<<mat[top][i]<<" ";
            }
            bottom-=1;
            if(j>k) break;
            for(int i=bottom;i>=top;i--){
                mat[i][left] =  j++;
                // cout<<mat[top][i]<<" ";
            }
            left+=1;
        }
        return mat;
    }
};