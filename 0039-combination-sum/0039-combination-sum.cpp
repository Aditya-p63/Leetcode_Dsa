class Solution {
public:
    void
    com(vector<vector<int>>& ans, vector<int> a, vector<int>& candidates,
        int target,int idx) {
            if(target==0){
                ans.push_back(a);
                return;
            }
            if(target<0) return;
            for(int i=idx;i<candidates.size();i++){
                a.push_back(candidates[i]);
                com(ans,a,candidates,target-candidates[i],i);
                a.pop_back();
            }
        }
        vector<vector<int>> combinationSum(vector<int>& candidates,
                                                    int target) {
        vector<int> a;
        vector<vector<int>> ans;
        com(ans, a, candidates, target, 0);
        return ans;
    }
};