class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> v = nums; 
        
        int min = abs(v[0]);
        int ans = v[0];

        for (int i = 1; i < n; i++) {
            int val = abs(v[i]);
            if (val < min) {
                min = val;
                ans = v[i];
            } else if (val == min && v[i] > ans) {
                ans = v[i]; 
            }
        }

        return ans;
    }
};
