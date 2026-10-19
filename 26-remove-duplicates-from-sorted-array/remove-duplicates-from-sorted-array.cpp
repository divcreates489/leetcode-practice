class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=prev){
                nums[count++]=nums[i];
                prev=nums[i];
            }
        }
        return count;
    }
};