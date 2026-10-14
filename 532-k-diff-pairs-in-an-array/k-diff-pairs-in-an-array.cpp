class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         if (k < 0) return 0;

        sort(nums.begin(), nums.end());

        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                if (nums[j] - nums[i] == k) {
                    count++;
                }
            }
        }

        return count;
    }
};