class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int i = 0, j = 0;
        int maxlen = INT_MIN, len = INT_MIN;
        while (j < n) {
            if (nums[j] == 1)
                j++;
            else { // nums[j]==0
                if (flips < k) {
                    flips++;
                    j++;
                } else {
                    // cal len
                    len = j - i;
                    maxlen = max(len, maxlen);
                    while (nums[i] != 0)
                        i++;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        maxlen = max(len, maxlen);
        return maxlen;
    }
};