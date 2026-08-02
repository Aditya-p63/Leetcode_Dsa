class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ls=0;
        for(int i=0;i<n;i++){
            if(ls==sum-ls-nums[i]){
                return i;
            }
            ls+=nums[i];
        }
        return -1;

    }
};