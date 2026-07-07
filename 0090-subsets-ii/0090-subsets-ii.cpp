class Solution {
public:
    void findSubsets(int ind, vector<int>& nums, vector<int>& ds,
                     set<vector<int>>& result) {

        if (ind == nums.size()) {
            result.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        findSubsets(ind + 1, nums, ds, result);
        ds.pop_back();
        findSubsets(ind + 1, nums, ds, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> ds;
        sort(nums.begin(), nums.end());

        findSubsets(0, nums, ds, result);
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};