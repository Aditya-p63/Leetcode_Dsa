class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        int i=0;
        while(i<n){
            int el=nums[i]-1;
            if(nums[el]==nums[i]) i++;
            else {
                swap(nums[i],nums[el]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};