class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
      
        int idx = -1 , max_sum=0;
        while (k--) {
            int max_ele = INT_MIN;
            for (int i = 0; i < n; i++) {
                max_ele = max(max_ele, nums[i]);
                idx = i;
            }
            max_sum+=max_ele;
            if(k==0){
                return max_sum;
            }
            else{
                max_ele++;
                // max_sum++;
                nums[idx]=max_ele;
            }
        }
        return max_sum;
    }
};