class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i=matrix.size();
        int j=matrix[0].size();
        vector<vector<int>>ans(j,vector<int>(i));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                ans[j][i]=matrix[i][j];
            }
        }
         

        return ans;
    }
};