class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }

        int even = 0;
        int odd = 0;
        for(auto x : mp){
            even+=x.second/2;
            odd+=x.second%2;
        }
        return {even,odd};
    }
};