class Solution {
public:
    void f(vector<int>& ds, vector<vector<int>>& ans, vector<int>& fre,
           vector<int>& nums) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (fre[i] == 1)
                continue;
            fre[i]=1;
            ds.push_back(nums[i]);
            f(ds, ans, fre, nums);
            ds.pop_back();
            fre[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> fre(n, 0);
        vector<int> ds;
        vector<vector<int>> ans;
        f(ds, ans, fre, nums);
        return ans;
    }
};