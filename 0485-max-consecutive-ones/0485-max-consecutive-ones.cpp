class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int count = 0;
        int i = 0;
        
        while (i < n) {
            if (nums[i] == 1) {
                count++;
                if (count > maxcount) {
                    maxcount = count;
                }
            } else {
                count = 0; 
            }
            i++;
        }
        return maxcount;
    }
};
