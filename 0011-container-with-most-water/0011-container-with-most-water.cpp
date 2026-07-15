class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int i = 0 , j = n-1;
        int a = 0;
        while(i<j){
            int h = min(nums[i],nums[j]);
            int w = abs(i-j);
            a = max(a,(h*w));
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return a;
    }
};