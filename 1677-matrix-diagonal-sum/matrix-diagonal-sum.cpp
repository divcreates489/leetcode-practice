class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int i=0;
        int j=0;
        while(i<mat.size()){
            ans+=mat[i][j];
            i++;
            j++;
        }
        int k=0;
        int l=mat.size()-1;
        while(k<mat.size()){
            
            ans+=mat[k][l];
            if(k==l){
                ans=ans-mat[k][l];
            }
            k++;
            l--;
        }
        return ans;

    }
};