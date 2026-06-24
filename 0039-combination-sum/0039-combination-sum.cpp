#include <bits/stdc++.h>
class Solution {
public:
    void f(vector<int>& arr, int target, vector<int>& ds, int idx,
           vector<vector<int>>& ans) {
        if (idx == arr.size()) {
            if (target == 0)
                ans.push_back(ds);
            return;
        }
        if (arr[idx] <= target) {
            ds.push_back(arr[idx]);
            f(arr, target - arr[idx], ds, idx, ans);
            ds.pop_back();
        }
        f(arr, target, ds, idx+1, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(arr, target, ds, 0, ans);
        return ans;
    }
};