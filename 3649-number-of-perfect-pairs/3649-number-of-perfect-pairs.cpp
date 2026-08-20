class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0)
                nums[i] = -nums[i];
        }
        sort(nums.begin(), nums.end());

        long long count = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            while (j < n && nums[j] <= 2 * nums[i]) {
                j++;
            }
            count += max(0, j - i - 1);
        }
        return count;
    }
};