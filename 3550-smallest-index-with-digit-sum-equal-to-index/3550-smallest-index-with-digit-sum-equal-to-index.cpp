class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            int x = 0;
            do {
                x += temp % 10;
                temp /= 10;
            } while (temp != 0);

            if (x == i) return i;
        }
        return -1;
    }
};
