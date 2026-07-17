class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++ ){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto x : mp) {
            if(x.second==2) nums.push_back(x.first);
        }
        return nums;
    }
};