class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto c : mp){
            if(c.second==2){
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};