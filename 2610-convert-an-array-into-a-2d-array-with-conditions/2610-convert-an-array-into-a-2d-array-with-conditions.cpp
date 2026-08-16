class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i  < n ; i++){
            mp[nums[i]]++;
        }
        while(true){
            vector<int>v;
            for(auto &x : mp){
                if(x.second>0){
                    v.push_back(x.first);
                    x.second--;
                }
            }
            if(v.empty()) break;
            ans.push_back(v);

        }
        return ans;
    }
};