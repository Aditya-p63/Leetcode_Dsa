class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=0;
        int sum2=0,sum3=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0 && nums[i]<=9){
                    sum+=nums[i];
            }
            else {
                sum1+=nums[i];
            }
            if(nums[i]>=10 && nums[i]<=99){
                sum2+=nums[i];
            }
            else {
                sum3+=nums[i];
            }
        }
        if(sum>sum1) return true;
        else if(sum2>sum3) return true;
        else return false;    
    }
};