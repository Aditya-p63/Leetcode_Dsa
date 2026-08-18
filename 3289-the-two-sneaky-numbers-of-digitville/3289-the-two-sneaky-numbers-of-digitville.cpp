class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    v.push_back(nums[i]);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};