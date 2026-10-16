class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>totalWealth;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            totalWealth.push_back(sum);
        }
        int max=INT_MIN;
        for(int k=0;k<totalWealth.size();k++){
            if(totalWealth[k]>max){
                max=totalWealth[k];
            }
        }
        return max;


    }
};