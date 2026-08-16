class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n==2 || n==1) return -1;
        int x = INT_MIN , y = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>x) x = nums[i];
            if(nums[i]<y) y = nums[i];
        }

        int r = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]!=x && nums[i]!=y) r = nums[i];
        }
        return r;
    }
};