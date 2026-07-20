class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) a.push_back(nums[i]);
        }
         for(int i=0;i<n;i++){
            if(nums[i]%2==1) a.push_back(nums[i]);
        }
        return a;
    }
};