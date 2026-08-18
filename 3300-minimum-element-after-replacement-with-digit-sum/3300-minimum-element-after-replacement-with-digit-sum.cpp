class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int sum = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            int x = nums[i];
            int y = 0;
            while(x>0){
                y += x%10;
                x = x/10;
            }
            nums[i]=y;
            sum = min(y,sum);
        }
        return sum;
    }
};