class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx_ele = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            if(nums[i]>mx_ele) mx_ele = nums[i];
        }
        int fs = 0;
        for(int i = 0 ; i < n ; i++){
            fs+=abs(mx_ele-nums[i]);
        }
        return fs;
    }
};