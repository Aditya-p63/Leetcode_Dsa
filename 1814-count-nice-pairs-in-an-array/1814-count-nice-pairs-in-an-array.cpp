class Solution {
public:
    int rev(int num) {
        int reversedNum = 0;
        while (num != 0) {
            int digit = num % 10; 
            reversedNum = reversedNum * 10 + digit; 
            num /= 10; 
        }
        return reversedNum;
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;

        // Step 1: Transform nums[i]
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] - rev(nums[i]);
        }

        // Step 2: Count frequencies
        unordered_map<int, long long> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Step 3: For each frequency, count pairs using nC2 = f*(f-1)/2
        for (auto &x : mp) {
            long long freq = x.second;
            count += (freq * (freq - 1)) / 2;
        }

        return (int)(count % 1000000007); // Use modulo (required by LeetCode)
    }
};
