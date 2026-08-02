class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
            if (nums[i] > max) max = nums[i];
        }
        int y=0;
        for(int i=1;i<=max;i++){
            if(min%i==0 && max%i==0){
                y= i;
            }
        }
        return y;
    }
};