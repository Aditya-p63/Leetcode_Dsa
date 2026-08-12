class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int r = -1;
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            if (nums[i] + nums[j] == 0) {
                r = max(r, nums[j]); 
                i++;
                j--;
            } 
            else if (nums[i] + nums[j] < 0) i++;
            else j--;
        }
        return r;
    }
};
