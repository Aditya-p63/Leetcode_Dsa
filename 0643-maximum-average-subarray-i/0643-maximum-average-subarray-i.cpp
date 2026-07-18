class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double x = k;
        double prev = 0;
        double curr = 0;
        for (int i = 0; i < k; i++) {
            prev += nums[i];
        }
        double prevavg = prev / x;
        double curravg = 0;
        int i = 1;
        int j = k;
        while (j < n) {
            curr = prev + nums[j] - nums[i - 1];
            curravg = curr / x;
            if (curravg > prevavg) {
                prevavg = curravg;
            }
            prev = curr;
            i++;
            j++;
        }
        return prevavg;
    }
};
