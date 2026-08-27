class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ls = 0 , ss = 0;
        for(int i = 0 ; i < k ; i++){
            ls += nums[i];
            ss += nums[n-i-1];
        }   
        return abs(ls-ss);
    }
};