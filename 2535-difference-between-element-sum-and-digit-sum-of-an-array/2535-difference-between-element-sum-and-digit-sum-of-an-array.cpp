class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int arrsum = 0;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            arrsum += nums[i];
            int x = nums[i];  
            while(x != 0) {
                sum += x % 10;
                x /= 10;
            }
        }

        return abs(arrsum - sum);
    }
};
