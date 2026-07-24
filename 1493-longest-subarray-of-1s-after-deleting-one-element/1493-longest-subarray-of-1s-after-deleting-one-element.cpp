class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int flips = 0;
        int k=1;
        int i = 0, j = 0;
        int maxlen = INT_MIN, len = INT_MIN;
        vector<int>a;
        while (j < n) {
            if (nums[j] == 1)
            {
                j++;
                }
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
        return maxlen-1;
    }
};