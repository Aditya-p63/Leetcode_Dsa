class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0 ;
        for(int i  = 0 ; i <  n ; i++){
            sum+=nums[i];
        }
        sum = sum%k;
        if(sum%k==0) return 0;
        else if(sum<k) return sum;
        return -1;
    }
};