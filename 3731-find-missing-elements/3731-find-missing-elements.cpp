class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        vector<int> a;

        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
            if (nums[i] < mn) mn = nums[i];
            if (nums[i] > mx) mx = nums[i];
        }

        for (int i = mn; i <= mx; i++) {
            if (s.find(i) == s.end()) {
                a.push_back(i);
            }
        }

        return a;
    }
};
