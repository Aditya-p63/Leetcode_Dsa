class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0)mp.insert(nums[i]);
        }
        return mp.size();
    }
};