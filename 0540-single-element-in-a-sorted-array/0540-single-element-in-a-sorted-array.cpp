class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(auto X : nums) x = x^X;
        return x;
    }
};