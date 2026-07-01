class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({nums[i], i});
        }
        sort(numsWithIndex.begin(), numsWithIndex.end());
        int i = 0, j = n - 1;
        while(i<j){
            int sum = numsWithIndex[i].first + numsWithIndex[j].first;
            if(sum==target){
                return {numsWithIndex[i].second, numsWithIndex[j].second};
            }
            else if(sum>target) j--;
            else i++;
        }
        return {-1,-1};
    }
};