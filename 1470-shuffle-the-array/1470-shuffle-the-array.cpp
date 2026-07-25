class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=nums.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back(nums[i]);
            a.push_back(nums[i+n]);
        }
        return a;
    }
};