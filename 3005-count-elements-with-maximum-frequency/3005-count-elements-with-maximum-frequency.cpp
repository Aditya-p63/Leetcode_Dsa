class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int fre = 0;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            fre = max(fre,x.second);
        }
        int res = 0;
        for(auto x : mp){
            if(x.second==fre) res+=x.second;
        }
        return res;
    }
};