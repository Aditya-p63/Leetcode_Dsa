class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int p=0;
        int ni=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) continue;
            if(nums[i]>0) p++;
            else ni++;
        }
        return max(p,ni);
    }
};